#include <stdio.h>
#include "logger.h"

char getLatestNames(){
    
}

int start(){
    logM("Booting software.",1);

    //Get the names:

    getLatestNames();

    ////////////////

    logM("Boot sucessful.",1);
    return 1;
}