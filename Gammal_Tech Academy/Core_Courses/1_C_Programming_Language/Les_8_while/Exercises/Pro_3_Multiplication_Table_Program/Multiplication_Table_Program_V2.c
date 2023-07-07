

/* >>> Multiplication Table Program For Number 8 ( Version 2 ) <<< */

/* >>> A program that prints 8 Multiplication Table (Using While). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Multiplication Table Program For Number 8 ( Version 2 ) ..\n\n");

    int i = 1, num = 8, result;

    while (i <= 10)
    {
        result = num * i;
        printf("%d * %d = %d\n", i, num, result);
        i++;
    }
    printf("\n\n");

    return 0;
}