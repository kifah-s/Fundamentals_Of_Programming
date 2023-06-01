

/* >>> FootBall Teams Program ( Version 6 ) <<< */

/* >>> FootBall Teams Program : If you are a fan of football there are some games you enjoy watching when two particular teams face off..
Required : Write a program that prints 3 football matches such as:( barcelona vs real madrid )  <<< */

#include <stdio.h>

void wel_mas_fun(char wel_mas[]);
void foo_tea_fun(char mat[]);

int main()
{

    wel_mas_fun("\n\nYou welcome in FootBall Teams Program ( Version 6 ) ..\n\n");

    foo_tea_fun("This is 3 matches for champion league : \n");
    foo_tea_fun("( Barcelona vs Real madrid )\n");
    foo_tea_fun("( Barcelona vs Bayern munich )\n");
    foo_tea_fun("( Barcelona vs Man city )\n\n\n");

    return 0;
}

// Function ..
// Welcome massage function;
void wel_mas_fun(char wel_mas[])
{
    printf("%s", wel_mas);
}

// footBall teams fuction;
void foo_tea_fun(char mat[])
{
    printf("%s", mat);
}