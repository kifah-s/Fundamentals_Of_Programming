

/* >>> Records Double Digits Program ( Version 8 ) <<< */

/* >>> A program that records double digits in two variables and prints them <<< */

#include <stdio.h>

char *wel_mas_fun();
int num_1_fun();
int num_2_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    printf("%s", *wel_mas);

    int num_1 = num_1_fun();
    int num_2 = num_2_fun();
    printf("Num_1 = %d\nNum_2 = %d\n\n\n", num_1, num_2);

    return 0;
}

// Functions ..

// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Records Double Digits Program ( Version 8 ) ..\n\n"); */

    char *wel_mas[] = {"\n\nYou welcome in Records Double Digits Program ( Version 8 ) ..\n\n"};

    return *wel_mas;
}

// Numbers function;
int num_1_fun()
{
    int num_1 = 1996;

    return num_1;
}

// Numbers function;
int num_2_fun()
{
    int num_2 = 2023;

    return num_2;
}