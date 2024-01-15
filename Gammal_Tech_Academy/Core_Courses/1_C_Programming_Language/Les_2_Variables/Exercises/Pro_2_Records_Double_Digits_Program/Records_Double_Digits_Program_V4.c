

/* >>> Records Double Digits Program ( Version 4 ) <<< */

/* >>> A program that records double digits in two variables and prints them <<< */

#include <stdio.h>

void wel_mas_fun();
void num_fun();

int main()
{
    wel_mas_fun();
    num_fun();

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Records Double Digits Program ( Version 4 ) ..\n\n");
}

// Numbers  function;
void num_fun()
{
    int num_1 = 1996, num_2 = 2023;
    printf("Num_1 = %d\nNum_2 = %d\n\n\n", num_1, num_2);
}