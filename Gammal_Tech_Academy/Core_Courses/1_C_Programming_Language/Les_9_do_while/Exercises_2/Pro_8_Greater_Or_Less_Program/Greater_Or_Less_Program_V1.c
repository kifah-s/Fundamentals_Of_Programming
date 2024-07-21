

//* Greater Or Less Program (Version 1).

/*
 * Write a program that prompts the user to enter a number,
 * If the entered number is greater than 20,
 * the program should print all numbers from 20 to the entered number,
 * If the entered number is less than or equal to 20,
 * it should print all numbers from the entered number to 20,
 * using a do...while loop.
 */

/*
! Input:
! Please enter a number: 15

! Output:
! 15 16 17 18 19 20
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void printNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int number = 0;

    number = gettingNumberFun(number);
    printNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Or Less Program (Version 1) ..\n\n");
}

// Getting Number / Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Print Number / Function.
void printNumberFun(int num)
{
    if (num > 20)
    {
        // Declare variables.
        int i = 20;

        do
        {
            printf("%i ", i);
            i++;
        } while (i <= num);
    }
    else if (num <= 20)
    {
        do
        {
            printf("%i ", num);
            num++;
        } while (num <= 20);
    }
}
//* End Function ..
