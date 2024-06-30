

/* >>> Favorite Food Program ( Version 3 ) <<< */

/* >>> Favorite Food Program : Even if you eat different types of food, you must have favorite foods..
Required : Write a program that prints 3 of your favorite eaters. <<< */

#include <stdio.h>

void welcome_massage(char massage[]);
void favorite(char fav_food[], char protein[], char authority[], char pasta[] );

int main()
{
    welcome_massage("\n\nYou welcome in Favorite Food Program ( Version 3 ) ..\n\n");
    favorite("My Favorite food is : \n", "- Food that contains protein\n", "- Authority\n", "- The pasta\n\n\n");

    return 0;
}

// Function ..
// Welcome massage function;
void welcome_massage(char massage[])
{
    printf("%s", massage);
}

// Favorite function;
void favorite(char fav_food[], char protein[], char authority[], char pasta[])
{
    printf("%s", fav_food);
    printf("%s", protein);
    printf("%s", authority);
    printf("%s", pasta);
    
}