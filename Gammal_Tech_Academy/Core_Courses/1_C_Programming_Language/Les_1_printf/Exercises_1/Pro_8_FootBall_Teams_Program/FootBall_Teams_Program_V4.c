

/* >>> FootBall Teams Program ( Version 4 ) <<< */

/* >>> FootBall Teams Program : If you are a fan of football there are some games you enjoy watching when two particular teams face off..
Required : Write a program that prints 3 football matches such as:( barcelona vs real madrid )  <<< */

#include <stdio.h>

void wel_mas_fun(char wel_mas[]);
void foo_tea_fun(char mat[], char bar1[], char bar2[], char bar3[]);

int main()
{
    char wel_mas[] = {"\n\nYou welcome in FootBall Teams Program ( Version 4 ) ..\n\n"};
    wel_mas_fun(wel_mas);

    char mat[] = {"This is 3 matches for champion league : \n"};
    char bar1[] = {"( Barcelona vs Real madrid )\n"};
    char bar2[] = {"( Barcelona vs Bayern munich )\n"};
    char bar3[] = {"( Barcelona vs Man city )\n\n\n"};
    foo_tea_fun(mat, bar1, bar2, bar3);

    return 0;
}

// Function ..
// Welcome massage function;
void wel_mas_fun(char wel_mas[])
{
    printf("%s", wel_mas);
}

// footBall teams fuction;
void foo_tea_fun(char mat[], char bar1[], char bar2[], char bar3[])
{
    printf("%s", mat);
    printf("%s", bar1);
    printf("%s", bar2);
    printf("%s", bar3);
}