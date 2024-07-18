

//* Sum Of All Numbers Program (Version 1).

/*
 * Write a program that prompts the user to enter any number,
 * The program should then print numbers from 1 to the entered number,
 * and calculate and print the sum of all numbers from 1 to the entered number,
 * using a while loop.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! 1 2 3 4 5
! Sum Of All Numbers: 15
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int n);
void printSumOfAllNumbersFun(int n, int s);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, sumOfAllNumbers = 0;

    number = gettingNumberFun(number);
    printSumOfAllNumbersFun(number, sumOfAllNumbers);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of All Numbers Program (Version 1) ..\n\n");
}

// Getting number / Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number: ");
    scanf("%i", &n);

    return n;
}

// Print Sum Of All Numbers / Function.
void printSumOfAllNumbersFun(int n, int s)
{
    // Declare Variables.
    int i = 1;

    printf("\n");
    while (i <= n)
    {
        printf("%i ", i);
        
        // s = s + i;
        s += i;

        i++;
    }
    printf("\nSum Of All Numbers: %i", s);
}
//* End Function ..
