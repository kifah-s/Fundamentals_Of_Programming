

/* >>> Multiplication Table Program For Any Number ( Version 3 ) <<< */

/* >>> A program that prints Multiplication Table For Any Number (Using While). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Multiplication Table Program For Any Number ( Version 3 ) ..\n\n");

    int i = 1, num, result;

    printf("\nPlease enter a number : ");
    scanf("%d", &num);

    while (i <= 10)
    {
        result = i * num;
        printf("\n%d * %d = %d", i, num, result);
        i++;
    }
    printf("\n\n\n");

    return 0;
}