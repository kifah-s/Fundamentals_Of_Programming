

/* >>> Sum And Subtract Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter two values, and prints the sum and the difference as positive values(using a function). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// structs ..
struct numbers
{
    int num_1;
    int num_2;
};

// Functions ..
void welcomeMassageFun();
struct numbers sumAndSubtractFun(int x, int y, struct numbers num);

int main()
{
    welcomeMassageFun();

    int num_1 = 0, num_2 = 0;

    printf("Please enter number 1: ");
    scanf("%d", &num_1);

    printf("Please enter number 2: ");
    scanf("%d", &num_2);

    struct numbers num;
    num = sumAndSubtractFun(num_1, num_2, num);
    printf("\nSum = %d\n", num.num_1);
    printf("Subtract = %d\n\n", num.num_2);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum And Subtract Program ( Version 4 ) ..\n\n");
}

// Sum And Subtract / Function.
struct numbers sumAndSubtractFun(int x, int y, struct numbers num)
{
    num.num_1 = x + y;
    num.num_2 = x - y;

    return num;
}