#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* INFO = "INFO";
char* ERROR = "ERROR"; 

void log(char* file, char* level,char * message ){
    FILE *fp = fopen(file, "w");
    //https://stackoverflow.com/questions/1442116/how-to-get-date-and-time-value-in-c-program
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    fprintf(" %s : %d-%d-%d %d:%d:%d %s\n", 
    level, tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, message);
        
}