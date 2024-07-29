

//* Number 5 Program (Version 1).

/*
 * Write a program that continuously prompts the user to enter 10 numbers,
 * stores them in an array, and then checks if the number 5 is present in the entered numbers,
 * If at least one occurrence of the number 5 is found, it prints "Found."
 */

/*
! Input:
! Please enter 10 numbers: 1 2 3 4 5 5 6 7 8 9

! Output:
! Found
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

    // Declare Array And Calculate The Length Of Array.
    int myArray[10];

    // Getting Numbers from user.
    gettingNumbersFun(myArray);

    // Found Or Not Found Number 5.
    foundNumber5Fun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number 5 Program (Version 1) ..\n\n");
}

// Getting Numbers - Function.
void gettingNumbersFun(int arr[])
{
    printf("Please enter 10 Numbers ..\n");
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
}
//* End Function ..
