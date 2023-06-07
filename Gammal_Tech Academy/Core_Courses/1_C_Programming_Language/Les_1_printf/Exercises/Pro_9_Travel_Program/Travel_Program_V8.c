

/* >>> Travel Program ( Version 8 ) <<< */

/* >>> Travel Program : One of the hobbies many people like is to travel to different countries and learn about people's cultures..
Required : Write a program that prints 5 countries you want to travel to. <<< */

#include <stdio.h>

char *wel_mas_fun();
void tra_fun();

int main()
{
    char *wel[] = {wel_mas_fun()};
    printf(*wel);

    // printf(wel_mas_fun());


    // tra_fun();

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *mas[] = {("\n\nYou welcome in Travel Program ( Version 8 ) ..\n\n")};
    /* printf(*mas); */
    return *mas;
}

// Travel fuction;
void tra_fun()
{
    printf("I like to travel to the following cities : \n");
    printf("- France\n");
    printf("- Spain\n");
    printf("- Holland\n");
    printf("- Germany\n");
    printf("- The Maldive Islands\n\n\n");
}