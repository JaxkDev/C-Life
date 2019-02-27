#include <stdio.h>
#include <string.h>
#include "logger.h"
#include "boot.h"

void main()
{
    logM("Program started.",0);

    int exitCode;
    exitCode = start();
    /* 
    Exit codes:
    1 - Normal
    2 - Crashed
    3 - Invalid Data
    4 - Unkown
    */

    char exitMsg[100];
    sprintf(exitMsg, "Program ended with exit code %d", exitCode);
    logM(exitMsg,0);
}