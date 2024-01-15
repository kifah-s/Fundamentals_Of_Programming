

/* >>> Sum Of Two Numbers Program ( Version 10 ) <<< */

/* >>> A program that records two numbers in two variables and prints the value of their combined product <<< */

#include <stdio.h>

char *wel_mas_fun();
char *res_mas_fun();
int sum_num_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    printf("%s", *wel_mas);

    char *res_mas[] = {res_mas_fun()};
    // printf("%s", *res_mas);

    int result = sum_num_fun(10, 10);
    // printf("%d", result);

    printf("%s%d\n\n\n", *res_mas, result);

    return 0;
}

// Functions ..

// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Sum Of Two Numbers Program ( Version 10 ) ..\n\n"); */

    char *wel_mas[] = {"\n\nYou welcome in Sum Of Two Numbers Program ( Version 10 ) ..\n\n"};

    return *wel_mas;
}

// Result massage function;
char *res_mas_fun()
{
    char *res_mas[] = {"Result sum the two numbers is : "};

    return *res_mas;
}

// Sum numbers function;
int sum_num_fun(int num_1, int num_2)
{
    num_1 = 1996;
    num_2 = 2023;
    int result = num_1 + num_2;
    /* printf("Result sum the two numbers is : %d\n\n\n", result); */

    return result;
}