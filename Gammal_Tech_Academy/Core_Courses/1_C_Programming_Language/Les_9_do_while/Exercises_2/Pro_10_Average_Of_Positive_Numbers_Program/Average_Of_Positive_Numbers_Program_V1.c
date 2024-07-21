

//* Average Of Positive Numbers Program (Version 1).

/*
 * Write a program using a do...while loop that asks the user to input a series of positive numbers,
 * The program should continue prompting for input until the user enters a negative number,
 * Once the user enters a negative number,
 * the program should calculate and print the average of all the positive numbers entered.
 */

/*
! Input:
! Please enter a positive number (or a negative number to stop): 1
! Please enter a positive number (or a negative number to stop): 2
! Please enter a positive number (or a negative number to stop): 3
! Please enter a positive number (or a negative number to stop): -5

! Output:
! Average of positive numbers is: 2
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkAndPrintNumberFun(int num, int sum);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int number = 0, average = 0;

    number = gettingNumberFun(number);
    checkAndPrintNumberFun(number, average);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Average Of Positive Numbers Program (Version 1) ..\n\n");
}

// Getting Number / Function.
int gettingNumberFun(int num)
{
    printf("Please enter a positive number (or a negative number to stop): ");
    scanf("%i", &num);

    return num;
}

// Check and print Number / Function.
void checkAndPrintNumberFun(int num, int ave)
{
    // Declare variables.
    int sum = 0, counter = 0;

    do
    {
        num = gettingNumberFun(num);

        if (num > 0)
        {
            // Calculate Numbers.
            // sum = sum + num;
            sum += num;

            // Counter numbers.
            counter++;
        }
        
    } while (num > 0);

    // Calculate Average.
    ave = sum / counter;

    // Print Average.
    printf("\nAverage of positive numbers is: %i", ave);
}
//* End Function ..
