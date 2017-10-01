#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <time.h>
#include "parser.h"


typedef http_response{
    char Connection[];
    char Date[];
    char Server[];
    int Content_Length;
    char Content_Type[];
    char Content_Encoding[];
    char Last_Modified[];
    char message_body[];
};

void request_handler(Request *request){
    switch (rq->http_method){
        case "GET": 
            
            break;
        case "HEAD":
            
            break;
        case "POST":
            http_response *response;
            char datetime[];
            time_t rawtime;
            struct tm *info;
            time( &rawtime );
            info = localtime( &rawtime );
            strftime(datetime,80,"%a, %d %b %Y %H:%M:%S %Z", info);         
            response->Connection=request->headers["Connection"];
            response->Date=datetime;
            response->Server="Liso/1.0";
            response->Content_Length=request->headers["Content-Length"];
            response->Content_Type=request->headers["Content-Type"];
            
            response->Last_Modified=
            
            break;

    }
    handler ()
}
