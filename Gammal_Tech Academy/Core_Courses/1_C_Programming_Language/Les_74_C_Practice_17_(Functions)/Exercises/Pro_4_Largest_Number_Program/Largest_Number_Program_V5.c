

/* >>> Largest Number Program ( Version 5 ) <<< */

/* >>> A program that asks the user to enter 4 numbers and prints the largest number in them (using a function). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Structs ..
struct numbers
{
    int num;
};


// Functions ..
void welcomeMassageFun();
int getNumbersFun(struct numbers number[4]);
int largestNumberFun(struct numbers number[4]);

int main()
{
    welcomeMassageFun();

    struct numbers number[4];

    getNumbersFun(number);

    int largestNumber = largestNumberFun(number);
    printf("\nLargest Number is: %d\n\n", largestNumber);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Largest Number Program ( Version 5 ) ..\n\n");
}

// Get numbers / Function.
int getNumbersFun(struct numbers number[4])
{
    printf("Please enter number 1: ");
    scanf("%d", &number[0].num);

    printf("Please enter number 2: ");
    scanf("%d", &number[1].num);

    printf("Please enter number 3: ");
    scanf("%d", &number[2].num);

    printf("Please enter number 4: ");
    scanf("%d", &number[3].num);
}

// Largest number / Function.
int largestNumberFun(struct numbers number[4])
{
    int largestNum = number[0].num;
    for (int i = 0; i < 4; i++)
    {
        if (number[i].num > largestNum)
        {
            largestNum = number[i].num;
        }
    }

    return largestNum;
}