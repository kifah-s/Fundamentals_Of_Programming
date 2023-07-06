

/* >>> Travel Program ( Version 11 ) <<< */

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
    char *wel[] = {wel_mas_fun()};
    /* printf(*wel); */
    printf("%s", *wel);

    char *tra[] = {tra_fun()};
    /* printf(*tra); */
    printf("%s", *tra);

    char *sta_1[] = {state_1_fun()};
    /* printf(*sta_1); */
    printf("%s", *sta_1);

    char *sta_2[] = {state_2_fun()};
    /* printf(*sta_2); */
    printf("%s", *sta_2);

    char *sta_3[] = {state_3_fun()};
    /* printf(*sta_3); */
    printf("%s", *sta_3);

    char *sta_4[] = {state_4_fun()};
    /* printf(*sta_4); */
    printf("%s", *sta_4);

    char *sta_5[] = {state_5_fun()};
    /* printf(*sta_5); */
    printf("%s", *sta_5);

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *mas[] = {("\n\nYou welcome in Travel Program ( Version 11 ) ..\n\n")};

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