

//* Not Found Program (Version 1).

/*
 * Write a program that continuously prompts the user to enter 5 numbers,
 * stores them in an array, checks if the number 5 is present in the entered numbers,
 * and prints the count of occurrences of the number 5 if found,
 * otherwise, it prints "Not found." The program runs indefinitely.
 */

/*
! Input:
! Please enter 5 numbers: 1 2 5 5 3

! Output:
! Found 2 occurrences of the number 5.
*/

#include <stdio.h>
#include <stdbool.h>

void welcomeMessageFun();
void gettingNumbersFun(int arr[]);
void foundNumber5Fun(int arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[5];

    while (1)
    {
        // Getting Numbers From User.
        gettingNumbersFun(myArray);

        // Found Or Not Found Number 5.
        foundNumber5Fun(myArray);
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Not Found Program (Version 1) ..\n\n");
}

// Getting Numbers - Function.
void gettingNumbersFun(int arr[])
{
    printf("\n\nPlease enter 5 Numbers ..\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Num %i: ", i + 1);
        scanf("%i", &arr[i]);
    }
}

// Found Number 5 - Function.
void foundNumber5Fun(int arr[])
{
    int counter = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 5)
        {
            counter++;
        }
    }

    if (counter > 0)
    {
        printf("\nFound %i occurrences of the number 5.", counter);
    }
    else
    {
        printf("\nNot Found.");
    }
}
//* End Function ..
