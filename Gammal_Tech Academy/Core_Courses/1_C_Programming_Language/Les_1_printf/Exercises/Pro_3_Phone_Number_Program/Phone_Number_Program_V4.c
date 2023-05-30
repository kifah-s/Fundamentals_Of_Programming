

/* >>> Phone Number Program ( Version 4 ) <<<*/

/* >>> Phone Number Program : When you get to know a new friend you usually exchange phone numbers so you can communicate together later..
Required : Write a program that prints the names of your close friends and their phone numbers. <<< */

#include <stdio.h>

void welcome_massage(char message[]);
void close_friends_phone(char close_friends_phone[]);

int main()
{
    welcome_massage("\n\nYou welcome in Phone Number Program ( Version 4 ) ..\n\n");
    
    close_friends_phone("My close friends and their phone numbers they :");
    close_friends_phone("- kifah : 0998621421");
    close_friends_phone("- kifah : 0998621421");
    close_friends_phone("- kifah : 0998621421");
    close_friends_phone("- kifah : 0998621421");
    close_friends_phone("- kifah : 0998621421");
    
    return 0;
}

// Functions ..

// Welcome massage function;
void welcome_massage(char message[])
{
    printf("%s", message);
}

// close friends function;
void close_friends_phone(char close_friends_phone[])
{
    
    printf("%s\n\n", close_friends_phone);
}