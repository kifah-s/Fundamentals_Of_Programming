

/* >>> Travel Program ( Version 4 ) <<< */

/* >>> Travel Program : One of the hobbies many people like is to travel to different countries and learn about people's cultures..
Required : Write a program that prints 5 countries you want to travel to. <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void tra_fun(char tra[], char fra[], char spa[], char hol[], char ger[], char mal[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Travel Program ( Version 4 ) ..\n\n"};
    wel_mas_fun(mas);

    char tra[] = {"I like to travel to the following cities : \n"};
    char fra[] = {"- France\n"};
    char spa[] = {"- Spain\n"};
    char hol[] = {"- Holland\n"};
    char ger[] = {"- Germany\n"};
    char mal[] = {"- The Maldive Islands\n\n\n"};
    tra_fun(tra, fra, spa, hol, ger, mal);

    return 0;
}

// Function ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Travel fuction;
void tra_fun(char tra[], char fra[], char spa[], char hol[], char ger[], char mal[])
{
    printf("%s", tra);
    printf("%s", fra);
    printf("%s", spa);
    printf("%s", hol);
    printf("%s", ger);
    printf("%s", mal);
}