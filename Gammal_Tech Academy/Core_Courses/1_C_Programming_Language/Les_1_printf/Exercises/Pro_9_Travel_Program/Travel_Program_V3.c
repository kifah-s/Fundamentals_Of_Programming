

/* >>> Travel Program ( Version 3 ) <<< */

/* >>> Travel Program : One of the hobbies many people like is to travel to different countries and learn about people's cultures..
Required : Write a program that prints 5 countries you want to travel to. <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void tra_fun(char tra[], char fra[],char spa[],char hol[],char ger[],char mal[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Travel Program ( Version 3 ) ..\n\n");
    tra_fun("I like to travel to the following cities : \n", "- France\n", "- Spain\n", "- Holland\n", "- Germany\n", "- The Maldive Islands\n\n\n");

    return 0;
}

// Function ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Travel fuction;
void tra_fun(char tra[], char fra[],char spa[],char hol[],char ger[],char mal[])
{
    printf("%s", tra);
    printf("%s", fra);
    printf("%s", spa);
    printf("%s", hol);
    printf("%s", ger);
    printf("%s", mal);
}