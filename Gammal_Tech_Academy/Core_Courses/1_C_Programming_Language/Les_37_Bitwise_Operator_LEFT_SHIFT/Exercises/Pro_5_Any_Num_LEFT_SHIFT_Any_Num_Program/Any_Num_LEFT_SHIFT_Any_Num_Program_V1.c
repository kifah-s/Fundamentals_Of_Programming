

/* >>> Any Num LEFT SHIFT Any Num Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter two values, then it prints the result of << between these two numbers. <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n\nYou welcome in Any Num LEFT SHIFT Any Num Program ( Version 1 ) ..\n\n");

    int num1 = 0;
    int num2 = 0;

    printf("Please enter number 1 : ");
    scanf("%d", &num1);
    printf("Please enter number 2 : ");
    scanf("%d", &num2);

    int result = num1 << num2;

    printf("\n%d << %d = %d\n\n", num1, num2, result);

    return 0;
}