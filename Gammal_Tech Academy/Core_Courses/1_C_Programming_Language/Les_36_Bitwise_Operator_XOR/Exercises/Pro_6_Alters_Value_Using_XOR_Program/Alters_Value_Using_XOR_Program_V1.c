

/* >>> Alters Value Using XOR Program ( Version 1 ) <<< */

/* >>> A program that alters the value of two variables (using XOR). <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n\nYou welcome in Alters Value Using XOR Program ( Version 1 ) ..\n\n");

    int num1 = 5;
    int num2 = 10;
    printf("Before Alters Value : num 1 = %d , num 2 = %d\n", num1, num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("After Alters Value : num 1 = %d , num 2 = %d\n\n", num1, num2);

    return 0;
}