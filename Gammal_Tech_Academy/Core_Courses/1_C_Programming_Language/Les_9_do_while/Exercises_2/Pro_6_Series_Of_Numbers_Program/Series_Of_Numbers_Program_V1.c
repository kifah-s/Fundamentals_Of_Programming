

//* Series Of Numbers Program (Version 1).

/*
 * Write a program that prompts the user to enter a series of numbers,
 * For each positive number entered, increase a counter by 1,
 * and for each negative number entered, decrease the counter by 1,
 * The program should stop when the user enters 0 and print the final count,
 * using a do...while loop.
 */

/*
! Input:
! Please enter a Number(0 to stop): 1
! Please enter a Number(0 to stop): 3
! Please enter a Number(0 to stop): -6
! Please enter a Number(0 to stop): 0

! Output:
! Count: 1
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun(int num, int cou);

int main()
{
    welcomeMessageFun();

    // Declare Variable.
    int number = 0, counter = 0;

    checkNumberFun(number, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Series Of Numbers Program (Version 1) ..\n\n");
}

// Getting Number / Function.
int gettingNumberFun(int num)
{
    printf("Please enter a Number / (0 to stop): ");
    scanf("%i", &num);

    return num;
}

// Check Number / Function.
void checkNumberFun(int num, int cou)
{
    do
    {
        num = gettingNumberFun(num);

        if (num > 0)
        {
            cou++;
        }
        else if (num < 0)
        {
            cou--;
        }

    } while (num != 0);

    printf("\nCounter: %i", cou);
}
//* End Function ..
