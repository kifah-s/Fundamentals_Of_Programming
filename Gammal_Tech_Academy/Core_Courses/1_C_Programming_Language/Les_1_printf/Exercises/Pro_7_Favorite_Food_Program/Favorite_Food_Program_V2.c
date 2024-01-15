

/* >>> Favorite Food Program ( Version 2 ) <<< */

/* >>> Favorite Food Program : Even if you eat different types of food, you must have favorite foods..
Required : Write a program that prints 3 of your favorite eaters. <<< */

#include <stdio.h>

void welcome_massage();
void favorite();

int main()
{
    welcome_massage();
    favorite();

    return 0;
}

// Function ..
// Welcome massage function;
void welcome_massage()
{
    printf("\n\nYou welcome in Favorite Food Program ( Version 2 ) ..\n\n");
}

// Favorite function;
void favorite()
{
    printf("My Favorite food is : \n");
    printf("- Food that contains protein\n");
    printf("- Authority\n");
    printf("- The pasta\n\n\n");
}