

/* >>> Sum And Subtract Program ( Version 6 ) <<< */

/* >>> A program that asks the user to enter two values, and prints the sum and the difference as positive values(using a function). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int sumFun(int *x, int *y);
int subtractFun(int *x, int *y);

int main()
{
    welcomeMassageFun();

    int num_1 = 0, num_2 = 0, sum = 0, subtract = 0;
    printf("Please enter number 1: ");
    scanf("%d", &num_1);
    printf("Please enter number 2: ");
    scanf("%d", &num_2);

    sum = sumFun(&num_1, &num_2);
    subtract = subtractFun(&num_1, &num_2);

    printf("\nSum = %d\n", sum);
    printf("Subtract = %d\n\n", subtract);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum And Subtract Program ( Version 6 ) ..\n\n");
}

// Sum / Function.
int sumFun(int *x, int *y)
{
    int sum = 0;
    sum = *x + *y;
    return sum;
}

// Subtract / Function.
int subtractFun(int *x, int *y)
{
    int subtract = 0;
    subtract = *x - *y;
    return subtract;
}