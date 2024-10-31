

//* Searches Cars 5 Program (Version 1).

/*
 * Write a program that counts the occurrences of a specific car brand using pointers.
 */

/*
! Input:
! Please enter brand: BMW

! Output:
! Number of car of brand BMW: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    char myArray[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    char myBrand[25];
    int counter = 0;

    // Declare Pointer.
    char(*ptr)[25] = myArray;

    printf("Please enter brand: ");
    scanf("%s", myBrand);

    for (int i = 0; i < arrLength; i++)
    {
        if (strcmp(myBrand, *(ptr + i)) == 0)
        {
            counter++;
        }
    }

    printf("\nNumber of car of brand %s: %d", myBrand, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Searches Cars 5 Program (Version 1) ..\n\n");
}

//* End Function ..
