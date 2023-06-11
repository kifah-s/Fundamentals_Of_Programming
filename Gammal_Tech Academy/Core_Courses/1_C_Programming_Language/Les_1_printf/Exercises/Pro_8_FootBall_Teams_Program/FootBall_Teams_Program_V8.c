

/* >>> FootBall Teams Program ( Version 8 ) <<< */

/* >>> FootBall Teams Program : If you are a fan of football there are some games you enjoy watching when two particular teams face off..
Required : Write a program that prints 3 football matches such as:( barcelona vs real madrid )  <<< */

#include <stdio.h>

char *wel_mas_fun();
char *foo_tea_fun();
char *matches_1_fun();
char *matches_2_fun();
char *matches_3_fun();

int main()
{
    printf(wel_mas_fun());
    printf(foo_tea_fun());
    printf(matches_1_fun());
    printf(matches_2_fun());
    printf(matches_3_fun());

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *wel_mas[] = {"\n\nYou welcome in FootBall Teams Program ( Version 8 ) ..\n\n"};
    return *wel_mas;
}

// footBall teams fuction;
char *foo_tea_fun()
{
    char *champion[] = {"This is 3 matches for champion league : \n"};
    return *champion;
}

// matches 1 fuction;
char *matches_1_fun()
{
    char *matches_1[] = {"( Barcelona vs Real madrid )\n"};
    return *matches_1;
}

// matches 2 fuction;
char *matches_2_fun()
{
    char *matches_2[] = {"( Barcelona vs Bayern munich )\n"};
    return *matches_2;
    printf("( Barcelona vs Man city )\n\n\n");
}

// matches 3 fuction;
char *matches_3_fun()
{
    char *matches_3[] = {"( Barcelona vs Man city )\n\n\n"};
    return *matches_3;
}