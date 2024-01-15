

/* >>> Max Min Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a group of numbers and print it to the largest and smallest number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int numberOfNumbersFun(int x);
int getNumberFun(int x, int n, int max, int min);

int main()
{
    welcomeMassageFun();

    int numberOfNumbers = numberOfNumbersFun(numberOfNumbers);

    int num = 0, max = 0, min = 0;
    getNumberFun(numberOfNumbers, num, max, min);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Max Min Program ( Version 3 ) ..\n\n");
}

// Get number of numbers / Function.
int numberOfNumbersFun(int x)
{
    printf("Please enter a number of numbers: ");
    scanf("%d", &x);

    return x;
}

// Get number / Function.
int getNumberFun(int x, int n, int max, int min)
{
    int i = 0;
    printf("\nPlease enter %d number:\n", x);
    printf("Num %d: ", i + 1);
    scanf("%d", &n);
    max = min = n;

    for (i = 1; i < x; i++)
    {
        printf("Num %d: ", i + 1);
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
        else if (n < min)
        {
            min = n;
        }
    }

    printf("\nMIN : %d\n", min);
    printf("MAX : %d\n\n", max);
}
