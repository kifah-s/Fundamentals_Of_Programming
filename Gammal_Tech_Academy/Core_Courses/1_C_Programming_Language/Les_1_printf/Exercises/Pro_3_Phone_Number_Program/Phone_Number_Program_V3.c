

/* >>> Phone Number Program ( Version 3 ) <<<*/

/* >>> Phone Number Program : When you get to know a new friend you usually exchange phone numbers so you can communicate together later..
Required : Write a program that prints the names of your close friends and their phone numbers. <<< */

#include <stdio.h>

void welcome_massage(char message[]);
void close_friends(char close_friends[], char phone[]);

int main()
{
    welcome_massage("\n\nYou welcome in Phone Number Program ( Version 3 ) ..\n\n");
    close_friends("My close friends and their phone numbers they :", "- kifah : 0998621421");
    
    return 0;
}

// Functions ..

// Welcome massage function;
void welcome_massage(char message[])
{
    printf("%s", message);
}

// close friends function;
void close_friends(char close_friends[], char phone[])
{
    printf("%s\n", close_friends);
    printf("%s\n", phone);
    printf("%s\n", phone);
    printf("%s\n", phone);
    printf("%s\n", phone);
    printf("%s\n\n\n", phone);
}