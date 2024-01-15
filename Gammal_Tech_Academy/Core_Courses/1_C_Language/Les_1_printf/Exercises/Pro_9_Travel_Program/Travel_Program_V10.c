

/* >>> Travel Program ( Version 10 ) <<< */

/* >>> Travel Program : One of the hobbies many people like is to travel to different countries and learn about people's cultures..
Required : Write a program that prints 5 countries you want to travel to. <<< */

#include <stdio.h>

char *wel_mas_fun();
char *tra_fun();
char *state_1_fun();
char *state_2_fun();
char *state_3_fun();
char *state_4_fun();
char *state_5_fun();

int main()
{
    /* printf(wel_mas_fun()); */
    printf("%s", wel_mas_fun());

    /* printf(tra_fun()); */
    printf("%s", tra_fun());

    /* printf(state_1_fun()); */
    printf("%s", state_1_fun());

    /* printf(state_2_fun()); */
    printf("%s", state_2_fun());

    /* printf(state_3_fun()); */
    printf("%s", state_3_fun());

    /* printf(state_4_fun()); */
    printf("%s", state_4_fun());

    /* printf(state_5_fun()); */
    printf("%s", state_5_fun());

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *mas[] = {("\n\nYou welcome in Travel Program ( Version 10 ) ..\n\n")};

    return *mas;
}

// Travel fuction;
char *tra_fun()
{
    char *tra[] = {("I like to travel to the following cities : \n")};

    return *tra;
}

// states fuction;
char *state_1_fun()
{
    char *rea[] = {("- France\n")};

    return *rea;
}

// states fuction;
char *state_2_fun()
{
    char *spa[] = {("- Spain\n")};

    return *spa;
}

// states fuction;
char *state_3_fun()
{
    char *hol[] = {("- Holland\n")};

    return *hol;
}

// states fuction;
char *state_4_fun()
{
    char *ger[] = {("- Germany\n")};

    return *ger;
}

// states fuction;
char *state_5_fun()
{
    char *mal[] = {("- The Maldive Islands\n\n\n")};

    return *mal;
}