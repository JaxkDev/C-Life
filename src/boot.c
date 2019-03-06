#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "logger.h"
#include "generators/nameGen.h"

int start(){
    logM("Booting software.",0);
    
    srand(time(NULL));
    
    printf("Welcome to C-Life !");
    printf("\nWhile we get things ready take a moment to read the following:\n"); //use printf so it doesnt spam log
    printf("\nTips:\n- Dont always be the smart geeky kid, try something new each time (you may suprise yourself)\n- Tired of being on the run leading a cirminal gang, try something new join the army, enroll in college.\n- Dont be glued to this game do go outside :)\n");

    //Get the names:
    
    int gender = rand() % 2;
    
    printf("Gender: %s",gender);

    char* fName = generateFirstName(0);
    char* lName = generateLastName();
    printf("Male: %s %s\n",fName,lName);

    fName = generateFirstName(1);
    lName = generateLastName();
    printf("Female: %s %s\n",fName,lName);


    ////////////////

    logM("Boot sucessful.",0);
    return 1;
}
