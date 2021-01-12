#include "net.h"

static bool is_server = false;

void network_init(void)
{
  if(SDLNet_Init() < 0)
    {
      printf("Could not init SDL Net: %s\n", SDLNet_GetError());
    }
}


void network_finish(void)
{
  SDLNet_Quit();
}

void network_set_server(bool s)
{
  is_server = s;
}

bool network_is_server(void)
{
  return is_server;
}

bool network_is_client(void)
{
  return !is_server;
}

//TODO: define network_get_http && network_upload_http
