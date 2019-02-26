#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void logM(char msg[], int level){
    time_t rawtime;
    time ( &rawtime );
    struct tm *tmp = gmtime(&rawtime);
    char fileV[1024];
    sprintf(fileV, "[%02d:%02d:%02d] : %s\n", tmp->tm_hour, tmp->tm_min, tmp->tm_sec , msg);
    printf("%s\n",msg);
    printf("Write to file: %s\n", fileV);
}