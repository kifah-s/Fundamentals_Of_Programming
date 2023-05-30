

/* >>> Phone Number Program ( Version 5 ) <<<*/

/* >>> Phone Number Program : When you get to know a new friend you usually exchange phone numbers so you can communicate together later..
Required : Write a program that prints the names of your close friends and their phone numbers. <<< */

#include <stdio.h>

void welcome_massage(char message[]);
void close_friends(char close_friend[], char phone[]);

int main()
{
    char message[] = {"\n\nYou welcome in Phone Number Program ( Version 5 ) ..\n\n"};
    welcome_massage(message);

    char close_friend[] = {"My close friends and their phone numbers they :"};
    char phone[] = {"- kifah : 0998621421"};
    close_friends(close_friend, phone);
    
    return 0;
}

// Functions ..

// Welcome massage function;
void welcome_massage(char message[])
{
    printf("%s", message);
}

// close friends function;
void close_friends(char close_friend[], char phone[])
{
    printf("%s\n", close_friend);
    printf("%s\n", phone);
    printf("%s\n", phone);
    printf("%s\n", phone);
    printf("%s\n", phone);
    printf("%s\n\n\n", phone);
}