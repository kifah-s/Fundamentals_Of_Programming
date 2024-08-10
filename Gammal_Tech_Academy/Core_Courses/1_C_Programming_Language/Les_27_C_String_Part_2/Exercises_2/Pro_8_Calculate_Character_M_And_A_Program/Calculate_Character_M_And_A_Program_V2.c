

//* Calculate Character M And A Program (Version 2).

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
void calculateCharacterMAndAFun(char arr1[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char name1[] = "GammalTech";

    // Calling Functions.
    calculateCharacterMAndAFun(name1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Character M And A Program (Version 2) ..\n\n");
}

// Calculate Character M And A - Function.
void calculateCharacterMAndAFun(char arr1[])
{
    int counterM = 0, counterA = 0;

    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] == 'm')
        {
            counterM++;
        }
        else if (arr1[i] == 'a')
        {
            counterA++;
        }
        
    }
    printf("Count of 'm' in the string: %d\n", counterM);
    printf("Count of 'a' in the string: %d\n", counterA);
}

//* End Function ..
