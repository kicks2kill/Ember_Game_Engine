#ifndef NET_H
#define NET_H
#include "common.h"
#include "engine.h"

void network_init(void);
void network_finish(void);

void network_set_server(bool);
bool network_is_client(void);
bool network_is_server(void);

enum {
      HTTP_ERR_NONE = 0,
      HTTP_ERR_URL = 1,
      HTTP_ERR_HOST = 2,
      HTTP_ERR_SOCKET =3,
      HTTP_ERR_DATA = 4,
      HTTP_ERR_NOFILE = 5,
};


int network_get_http(char* out, int max, char* frmt, ...);
int network_upload_http(const char* fname, char* frmt, ...);
#endif
