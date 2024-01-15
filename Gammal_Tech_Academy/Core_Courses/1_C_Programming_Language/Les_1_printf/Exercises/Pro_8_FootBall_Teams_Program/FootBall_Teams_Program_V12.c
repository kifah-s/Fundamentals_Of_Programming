

/* >>> FootBall Teams Program ( Version 12 ) <<< */

/* >>> FootBall Teams Program : If you are a fan of football there are some games you enjoy watching when two particular teams face off..
Required : Write a program that prints 3 football matches such as:( barcelona vs real madrid )  <<< */

#include <stdio.h>

char *wel_mas_fun(char wel_mas[]);
char *foo_tea_fun(char mat[]);

int main()
{
    char *mas[] = {wel_mas_fun("\n\nYou welcome in FootBall Teams Program ( Version 12 ) ..\n\n")};
    /* printf(*mas); */
    printf("%s", *mas);

    char *mat[] = {foo_tea_fun("This is 3 matches for champion league : \n")};
    /* printf(*mat); */
    printf("%s", *mat);

    char *tea1[] = {foo_tea_fun("( Barcelona vs Real madrid )\n")};
    /* printf(*tea1); */
    printf("%s", *tea1);

    char *tea2[] = {foo_tea_fun("( Barcelona vs Bayern munich )\n")};
    /* printf(*tea2); */
    printf("%s", *tea2);

    char *tea3[] = {foo_tea_fun("( Barcelona vs Man city )\n\n\n")};
    /* printf(*tea3); */
    printf("%s", *tea3);

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun(char wel_mas[])
{
    /* printf("%s", wel_mas); */
    return wel_mas;
}

// footBall teams fuction;
char *foo_tea_fun(char mat[])
{
    /* printf("%s", mat); */
    return mat;
}