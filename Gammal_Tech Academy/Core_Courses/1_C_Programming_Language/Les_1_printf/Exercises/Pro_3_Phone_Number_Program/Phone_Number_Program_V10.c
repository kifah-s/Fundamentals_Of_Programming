

/* >>> Phone Number Program ( Version 10 ) <<<*/

/* >>> Phone Number Program : When you get to know a new friend you usually exchange phone numbers so you can communicate together later..
Required : Write a program that prints the names of your close friends and their phone numbers. <<< */

#include <stdio.h>

char *welcome_massage(char message[]);
char *close_friends(char close_friends_phone[]);

int main()
{
    char wel[] = {"\n\nYou welcome in Phone Number Program ( Version 10 ) ..\n\n"};
    char *welcome[] = {welcome_massage(wel)};
    printf(*welcome);

    char close_friend[] = {"My close friends and their phone numbers they :\n\n"};
    char phone[] = {"- kifah : 0998621421\n\n"};

    char *close[] = {close_friends(close_friend)};
    printf(*close);

    char *pho[] = {close_friends(phone)};
    printf(*pho);
    printf(*pho);
    printf(*pho);
    printf(*pho);
    printf(*pho);

    return 0;
}

// Functions ..

// Welcome massage function;
char *welcome_massage(char message[])
{
    /* printf("%s", message); */
    return message;
}

// close friends function;
char *close_friends(char close_friends_phone[])
{
    /* printf("%s\n\n", close_friends_phone); */
    return close_friends_phone;
}