

/* >>> Sum 2 Numbers Program ( Version 3 ) <<< */

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

    printf("Please enter number 1: ");
    scanf("%d", &num_1);

    printf("Please enter number 2: ");
    scanf("%d", &num_2);

    printf("\nsum 2 numbers = %d\n\n", sum2Numbers(num_1, num_2));

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum 2 Numbers Program ( Version 3 ) ..\n\n");
}

// Sum 2 numbers / Function.
int sum2Numbers(int x, int y)
{
    return x + y;
}
