

/* >>> Largest Number Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter 4 numbers and prints the largest number in them (using a function). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int largestNumberFun(int a, int b, int c, int d);

int main()
{
    welcomeMassageFun();

    int num_1 = 0, num_2 = 0, num_3 = 0, num_4 = 0;

    printf("Please enter number 1: ");
    scanf("%d", &num_1);

    printf("Please enter number 2: ");
    scanf("%d", &num_2);

    printf("Please enter number 3: ");
    scanf("%d", &num_3);

    printf("Please enter number 4: ");
    scanf("%d", &num_4);

    int largestNumber = largestNumberFun(num_1, num_2, num_3, num_4);
    printf("\nLargest number is: %d\n\n", largestNumber);


    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Number Program ( Version 1 ) ..\n\n");
}

// Largest number / Function.
int largestNumberFun(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > a && b > c && b > d)
    {
        return b;
    }
    else if (c > a && c > b && c > d)
    {
        return c;
    }
    else if (d > a && d > b && d > c)
    {
        return d;
    }
}