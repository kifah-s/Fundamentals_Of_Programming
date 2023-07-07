

/* >>> Multiplication Table Program For Number 8 ( Version 1 ) <<< */

/* >>> A program that prints 8 Multiplication Table (Using While). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Multiplication Table Program For Number 8 ( Version 1 ) ..\n\n");

    int i = 1, num = 8;

    while (i <= 10)
    {
        printf("%d * %d = %d\n", i, num, num * i);
        i++;
    }
    printf("\n\n\n");

    return 0;
}