#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "colour.h"

void resetColour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 0x0007);
}

void testColour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    /*
    Colour codes:

    Foreground:
    - Black             0x0000 / 0
    - Dark Blue         0x0001 / 1
    - Green             0x0002 / 2
    - Aqua              0x0003 / 3
    - Red               0x0004 / 4
    - Purple            0x0005 / 5
    - Yellow            0x0006 / 6
    - White             0x0007 / 7
    - Grey              0x0008 / 8
    - Light Blue        0x0009 / 9

    Background: (Last digit is FG colour)
    - Black             0x0000 / 0
    - Blue              0x0010 / 16
    - Green             0x0020 / 32
    - Aqua              0x0030 / 48
    - Red               0x0040 / 64
    - Purple            0x0050 / 80
    - Yellow            0x0060 / 96
    - White             0x0070 / 112
    - Grey              0x0080 / 128
    - Light Blue        0x0090 / 144
                    
    Examples:
    - Green BG,Red FG   0x0024  /  36
    - White BG,Green FG 0x0072  /  114

    */
    SetConsoleTextAttribute(hConsole, 114);
    printf("\nThis is some nice COLORFUL text, isn't it?\n\n");
    resetColour();
}

int generateNumber(int limit)
{
    srand(time(NULL));
    return (rand() % limit) + 1;
}

int main()
{
    printf("Starting program.");
    printf("%d", getColour("Red"));
    //printf("Hi there !\n");
    //printf("\033[0;31mMy Magic number is %d\n\033[0m", generateNumber(100));
    //testColour();
    printf("Program ended."); //used for debugging in travis
    return 0;
}
