

/* >>> Phone Number Program ( Version 7 ) <<<*/

/* >>> Phone Number Program : When you get to know a new friend you usually exchange phone numbers so you can communicate together later..
Required : Write a program that prints the names of your close friends and their phone numbers. <<< */

#include <stdio.h>

char *welcome_massage(char message[]);
char *close_friends(char close_friends_phone[]);

int main()
{
    char message[] = {"\n\nYou welcome in Phone Number Program ( Version 7 ) ..\n\n"};
    welcome_massage(message);
    printf(message);

    char close_friend[] = {"My close friends and their phone numbers they :\n\n"};
    char phone[] = {"- kifah : 0998621421\n\n"};

    close_friends(close_friend);
    printf(close_friend);

    close_friends(phone);
    printf(phone);

    close_friends(phone);
    printf(phone);

    close_friends(phone);
    printf(phone);

    close_friends(phone);
    printf(phone);

    close_friends(phone);
    printf(phone);

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