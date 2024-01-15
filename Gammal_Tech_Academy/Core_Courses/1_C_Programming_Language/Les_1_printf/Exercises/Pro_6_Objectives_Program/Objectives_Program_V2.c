

/* >>> Objectives Program ( Version 2 ) <<< */

/* >>> Objectives Program : Every person has some goals that he dreams of achieving in his life and you always have to make your goals ahead of you to remember them constantly..
Required : write a program that prints out the goals you dream of achieving. <<< */

#include <stdio.h>

void welcome_massage();
void objectives();

int main()
{
    welcome_massage();
    objectives();
    
    return 0;
}

// Function ..
// Welcome massage function;
void welcome_massage()
{
    printf("\n\nYou welcome in Objectives Program ( Version 2 ) ..\n\n");
}

// Objectives function;
void objectives()
{
    printf("My Objectives is : \n");
    printf("- Professional software engineer\n");
    printf("- Buying a car\n");
    printf("- Traveling\n");
    printf("- Fitness body\n\n\n");
}