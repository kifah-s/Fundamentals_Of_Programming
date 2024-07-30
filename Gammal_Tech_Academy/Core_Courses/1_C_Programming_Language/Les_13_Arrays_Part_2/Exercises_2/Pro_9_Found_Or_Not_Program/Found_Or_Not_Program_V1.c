

//* Found Or Not Program (Version 1).

/*
 * Write a program that continuously prompts the user to enter 10 numbers,
 * stores them in an array, checks if the number 5 is present in the entered numbers,
 * and prints "Found" if at least one occurrence of the number 5 is found; otherwise,
 * it prints "Not found." The program runs indefinitely.
 */

/*
! Input:
! Please enter 10 numbers: 1 1 2 3 6 7 8 9 3 1

! Output:
! Not Found
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
    int myArray[10];

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
    printf("\n\nYou welcome in Found Or Not Program (Version 1) ..\n\n");
}

// Getting Numbers - Function.
void gettingNumbersFun(int arr[])
{
    printf("\n\nPlease enter 10 Numbers ..\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Num %i: ", i + 1);
        scanf("%i", &arr[i]);
    }
}

// Found Number 5 - Function.
void foundNumber5Fun(int arr[])
{
    bool found = false;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 5)
        {
            found = true;
        }
    }

    if (found == true)
    {
        printf("\nFound.");
    }
    else
    {
        printf("\nNot Found.");
    }
}
//* End Function ..
