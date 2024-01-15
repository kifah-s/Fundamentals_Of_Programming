

/* >>> Phone Number Program ( Version 8 ) <<<*/

/* >>> Phone Number Program : When you get to know a new friend you usually exchange phone numbers so you can communicate together later..
Required : Write a program that prints the names of your close friends and their phone numbers. <<< */

#include <stdio.h>

char *welcome_massage(char message[]);
char *close_friends(char close_friends_phone[]);

int main()
{
    char message[] = {"\n\nYou welcome in Phone Number Program ( Version 8 ) ..\n\n"};
    welcome_massage(message);
    printf(message);

    char close_friend[] = {"My close friends and their phone numbers they :\n\n"};
    char phone[] = {"- kifah : 0998621421\n\n"};

    printf(close_friends(close_friend));

    printf(close_friends(phone));

    printf(close_friends(phone));

    printf(close_friends(phone));

    printf(close_friends(phone));

    printf(close_friends(phone));

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