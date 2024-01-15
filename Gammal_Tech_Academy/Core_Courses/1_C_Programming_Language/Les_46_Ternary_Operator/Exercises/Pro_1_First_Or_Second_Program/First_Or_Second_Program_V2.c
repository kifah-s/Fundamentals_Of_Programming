

/* >>> First Or Second Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter two different numbers if the first is larger than the second, printed "first is the greatest" and if vice versa printed "second is the greatest" (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("\n\nYou welcome in First Or Second Program ( Version 2 ) ..\n\n");

    int firstNum = 0, secondNum = 0;

    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    /* firstNum > secondNum ? printf("\nfirst is the greatest\n\n") : printf("\nsecond is the greatest\n\n"); */

    printf(firstNum > secondNum ? "\nfirst is the greatest\n\n" : "\nsecond is the greatest\n\n");

    return 0;
}
