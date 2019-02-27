#include <stdio.h>
#include <stdlib.h>
#include "logger.h"

char getLatestNames(){
    
}

int start(){
    logM("Booting software.",0);
    printf("Welcome to C-Life !");
    printf("\nWhile we get things ready take a moment to read the following:\n"); //use printf so it doesnt spam log
    printf("\nTips:\n- Dont always be the smart geeky kid, try something new each time (you may suprise yourself)\n- Tired of being on the run leading a cirminal gang, try something new join the army, enroll in college.\n- Dont be glued to this game do go outside :)\n");

    //Get the names:

    getLatestNames();

    ////////////////

    logM("Boot sucessful.",0);
    return 1;
}