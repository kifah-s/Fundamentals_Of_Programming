

/* >>> Sum 2 Numbers Program ( Version 6 ) <<< */

/* >>> A program that asks the user to enter two values, then it sums the two values ​​that the user entered and print (using a function). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int sum2Numbers(int x, int y);

int main()
{
    welcomeMassageFun();

    int num_1 = 0, num_2 = 0;

    sum2Numbers(num_1, num_2);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum 2 Numbers Program ( Version 6 ) ..\n\n");
}

// Sum 2 numbers / Function.
int sum2Numbers(int x, int y)
{
    printf("Please enter number 1: ");
    scanf("%d", &x);

    printf("Please enter number 2: ");
    scanf("%d", &y);

    int sum = x + y;

    printf("\nsum 2 numbers = %d\n\n", sum);
}
