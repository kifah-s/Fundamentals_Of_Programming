

//* Sum Numbers Program (Version 1).

/*
 * Write a program that prints numbers from 1 to 10,
 * calculates their sum, and prints the total using a do...while loop.
 */

/*
! Output:
! 1 2 3 4 5 6 7 8 9 10
! Sum of Numbers: 55
*/

#include <stdio.h>

void welcomeMessageFun();
void printSumNumberFun(int sum);

int main()
{
    welcomeMessageFun();

    // Declare Variable.
    int sumNumbers = 0;

    printSumNumberFun(sumNumbers);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Numbers Program (Version 1) ..\n\n");
}

// Print Sum Numbers / Function.
void printSumNumberFun(int sum)
{
    // Declare Variables.
    int i = 1;

    do
    {
        printf("%i ", i);
        // sum = sum + i;
        sum += i;
        i++;
    } while (i <= 10);

    printf("\nSum of Numbers: %i", sum);
}
//* End Function ..
