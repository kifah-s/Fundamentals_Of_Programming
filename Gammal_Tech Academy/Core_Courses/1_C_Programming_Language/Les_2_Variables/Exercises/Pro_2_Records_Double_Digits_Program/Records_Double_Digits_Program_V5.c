

/* >>> Records Double Digits Program ( Version 5 ) <<< */

/* >>> A program that records double digits in two variables and prints them <<< */

#include <stdio.h>

char wel_mas_fun();
int num_fun();

int main()
{
    char wel_mas[] = {wel_mas_fun()};

    int num[] = {num_fun()};

    return 0;
}

// Functions ..
// Welcome massage function;
char wel_mas_fun()
{
    printf("\n\nYou welcome in Records Double Digits Program ( Version 5 ) ..\n\n");
}

// Numbers  function;
int num_fun()
{
    int num_1 = 1996,
        num_2 = 2023;

    printf("Num_1 = %d\nNum_2 = %d\n\n\n", num_1, num_2);
}