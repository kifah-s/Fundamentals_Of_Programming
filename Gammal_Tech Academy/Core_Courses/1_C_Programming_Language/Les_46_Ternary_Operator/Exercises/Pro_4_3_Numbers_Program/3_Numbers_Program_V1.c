

/* >>> 3 Numbers Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter three numbers and print the largest in them (using Ternary Operator). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("\n\nYou welcome in 3 Numbers Program ( Version 1 ) ..\n\n");

    int firstNum = 0, secondNum = 0, thirdNum = 0;

    printf("Please enter first number : ");
    scanf("%d", &firstNum);

    printf("Please enter second number : ");
    scanf("%d", &secondNum);

    printf("Please enter third number : ");
    scanf("%d", &thirdNum);

    firstNum > secondNum &&firstNum > thirdNum ? printf("\nLargest : %d\n\n", firstNum) : 0;
    secondNum > firstNum &&secondNum > thirdNum ? printf("\nLargest : %d\n\n", secondNum) : 0;
    thirdNum > firstNum &&thirdNum > secondNum ? printf("\nLargest : %d\n\n", thirdNum) : 0;

    return 0;
}
