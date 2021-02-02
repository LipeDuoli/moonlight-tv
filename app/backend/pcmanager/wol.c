#include "backend/computer_manager.h"

#include <errno.h>
#include <string.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>

static bool wol_build_packet(const char *macstr, uint8_t *packet);

bool pcmanager_send_wol(PSERVER_LIST node)
{
  uint8_t packet[102];
  if (!wol_build_packet(node->mac, packet))
  {
    return false;
  }
  int broadcast = 1;
  int sockfd;
  sockfd = socket(AF_INET, SOCK_DGRAM, 0);
  if (setsockopt(sockfd, SOL_SOCKET, SO_BROADCAST, &broadcast, sizeof broadcast))
  {
    fprintf(stderr, "setsockopt() error: %d %s\n", errno, strerror(errno));
    return false;
  }

  struct sockaddr_in client, server;
  client.sin_family = AF_INET;
  client.sin_addr.s_addr = INADDR_ANY;
  client.sin_port = 0;
  // Bind socket
  if (bind(sockfd, (struct sockaddr *)&client, sizeof(client)))
  {
    fprintf(stderr, "bind() error: %d %s\n", errno, strerror(errno));
    return false;
  }

  // Set server endpoint (broadcast)
  server.sin_family = AF_INET;
  server.sin_addr.s_addr = inet_addr("255.255.255.255");
  server.sin_port = htons(9);

  if (sendto(sockfd, &packet, sizeof(packet), 0, (struct sockaddr *)&server, sizeof(server)))
  {
    fprintf(stderr, "sendto() error: %d %s\n", errno, strerror(errno));
    return false;
  }
  return true;
}

static bool wol_build_packet(const char *macstr, uint8_t *packet)
{
  int values[6];
  if (sscanf(macstr, "%x:%x:%x:%x:%x:%x%*c", &values[0], &values[1], &values[2], &values[3], &values[4], &values[5]) != 6)
  {
    return false;
  }
  uint8_t mac[6];
  for (int i = 0; i < 6; i++)
  {
    mac[i] = (uint8_t)values[i];
  }
  memset(packet, 0xFF, 6);
  for (int i = 0; i < 16; i++)
  {
    memcpy(&packet[6 + i * 6], mac, 6);
  }
  return true;
}