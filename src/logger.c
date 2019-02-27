#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void writeToFile(char msg[1024]){
    FILE * fp;
    fp = fopen ("log.txt","a");
    fprintf(fp, "%s", msg);
    fclose(fp);
}

void logM(char msg[], int level){
    time_t rawtime;
    time ( &rawtime );
    struct tm *tmp = gmtime(&rawtime);
    char fileV[1024];
    char levels[5][10]; 
    strcpy(levels[0], "Debug");
    strcpy(levels[1], "Info");
    strcpy(levels[2], "Warning");
    strcpy(levels[3], "Error");
    strcpy(levels[4], "Critical");
    sprintf(fileV, "[%02d:%02d:%02d] [System/%s]: %s\n", tmp->tm_hour, tmp->tm_min, tmp->tm_sec , levels[level], msg);
    if(level != 0){
        printf("[System/%s] : %s\n",levels[level], msg);
    }
    writeToFile(fileV);
}