

//* Specific Character Program (Version 1).

/*
 * Write a program to count the occurrences of a specific character in a given array of strings.
 */

/*
! Input:
! Please enter the character to count: e

! Output:
! Occurrences of 'e': 9
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterFun(char braMenu[][25], int arrLen, char ch, int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    char specificCharacter;
    int counter = 0;

    // Call Functions.
    printCounterFun(brandMenu, arrLength, specificCharacter, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Specific Character Program (Version 1) ..\n\n");
}

// Receive character from user - Function.
char receiveCharacterFun(char ch)
{
    printf("Please enter the character to count: ");
    scanf("%c", &ch);

    return ch;
}

// Search for character - Function.
int searchForCharacterFun(char braMenu[][25], int arrLen, char ch, int cou)
{
    for (int i = 0; i < arrLen; i++)
    {
        for (int j = 0; j < braMenu[i][j]; j++)
        {
            if (ch == braMenu[i][j])
            {
                cou++;
            }
        }
    }

    return cou;
}

// Print counter - Function.
void printCounterFun(char braMenu[][25], int arrLen, char ch, int cou)
{
    ch = receiveCharacterFun(ch);
    cou = searchForCharacterFun(braMenu, arrLen, ch, cou);

    printf("Occurrences of '%c': %d", ch, cou);
}
//* End Function ..
