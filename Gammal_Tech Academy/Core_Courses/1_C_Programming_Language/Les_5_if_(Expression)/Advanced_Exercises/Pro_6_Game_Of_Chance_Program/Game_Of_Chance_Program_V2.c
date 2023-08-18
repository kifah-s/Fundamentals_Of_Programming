

/* >>> Game Of Chance Program ( Version 2 ) <<< */

/* >>> Game Of Chance Program : We all love games. What do you think about making one then. What is
Required : Write a program that takes input from the user and if 1 prints "jump 30 times" and if 2 prints "run 1 km" and so on and you can add more. <<< */

#include <stdio.h>

void welcomeMassageFun();
int chanceFun();

int main()
{
    welcomeMassageFun();
    chanceFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Game Of Chance Program ( Version 2 ) ..\n\n");
}

int chanceFun()
{
    int number;

    printf("Please enter the number from 1 to 3 : ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("\nJump 30 times\n\n\n");
    }
    if (number == 2)
    {
        printf("\nRun 1 km\n\n\n");
    }
    if (number == 3)
    {
        printf("\nPush up 10 times\n\n\n");
    }
}