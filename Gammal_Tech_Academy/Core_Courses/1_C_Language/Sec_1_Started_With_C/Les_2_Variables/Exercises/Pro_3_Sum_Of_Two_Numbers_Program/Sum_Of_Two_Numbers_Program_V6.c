

/* >>> Sum Of Two Numbers Program ( Version 6 ) <<< */

/* >>> A program that records two numbers in two variables and prints the value of their combined product <<< */

#include <stdio.h>

char *wel_mas_fun();
int sum_num_fun();

int main()
{
    printf("%s", wel_mas_fun());

    printf("Result sum the two numbers is : %d\n\n\n", sum_num_fun());

    return 0;
}

// Functions ..

// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Sum Of Two Numbers Program ( Version 6 ) ..\n\n"); */

    char *wel_mas[] = {"\n\nYou welcome in Sum Of Two Numbers Program ( Version 6 ) ..\n\n"};

    return *wel_mas;
}

// Sum numbers function;
int sum_num_fun()
{
    int num_1 = 1996;
    int num_2 = 2023;
    int result = num_1 + num_2;
    /* printf("Result sum the two numbers is : %d\n\n\n", result); */

    return result;
}