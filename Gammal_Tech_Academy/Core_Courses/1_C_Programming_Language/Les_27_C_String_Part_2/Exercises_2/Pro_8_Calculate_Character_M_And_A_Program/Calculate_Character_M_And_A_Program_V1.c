

//* Calculate Character M And A Program (Version 1).

/*
 * Write a program that initializes a character array name1 with the value "GammalTech",
 * and calculates the number of occurrences of both 'm' and 'a' in the string using a loop,
 * Print the calculated counts for both characters.
 */

/*
! Output:
! Count of 'm' in the string: 2
! Count of 'a' in the string: 2
*/

#include <stdio.h>

void welcomeMessageFun();
void calculateCharacterMFun(char arr1[]);
void calculateCharacterAFun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "GammalTech";

    // Calling Functions.
    calculateCharacterMFun(name1);
    calculateCharacterAFun(name1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Character M And A Program (Version 1) ..\n\n");
}

// Calculate Character M - Function.
void calculateCharacterMFun(char arr1[])
{
    int counter = 0;

    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] == 'm')
        {
            counter++;
        }
    }
    printf("Count of 'm' in the string: %d\n", counter);
}

// Calculate Character A - Function.
void calculateCharacterAFun(char arr1[])
{
    int counter = 0;

    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] == 'a')
        {
            counter++;
        }
    }
    printf("Count of 'a' in the string: %d", counter);
}
//* End Function ..
