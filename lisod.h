#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <time.h>
#include "parse.h"

typedef struct{
    int Content_Length;
    char Connection[20];
    char Date[50];
    char Server[30];
    char Content_Type[50];
    char Content_Encoding[50];
    char Last_Modified[50];
    char message_body[];
} http_response;

void *get_in_addr(struct sockaddr *sa);
http_response* request_handler(Request *request);