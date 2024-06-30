

/* >>> program Sum first numbers and Multiply last numbers ( Version 4 ) <<< */

/* >>> A program that records 4 digits and prints the sum of the first two digits in a line and multiply the other two digits in another line <<< */

#include <stdio.h>

void wel_mas_fun();
void res_fun(int num1, int num2, int num3, int num4);

int main()
{
    wel_mas_fun();

    int n1 = 1,
        n2 = 2,
        n3 = 3,
        n4 = 4;

    res_fun(n1, n2, n3, n4);

    return 0;
}

// Functions..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in program Sum first numbers and Multiply last numbers ( Version 4 ) ..\n\n");
}

// Result function;
void res_fun(int num1, int num2, int num3, int num4)
{
    
    int res1 = num1 + num2,
        res2 = num3 * num4;

    printf("num_1 + num_2 = %d\nnum_3 * num_4 = %d\n\n\n", res1, res2);
}