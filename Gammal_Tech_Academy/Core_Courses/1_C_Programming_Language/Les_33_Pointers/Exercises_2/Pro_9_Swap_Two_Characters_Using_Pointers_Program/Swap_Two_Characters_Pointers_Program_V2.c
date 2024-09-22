

//* Swap Two Characters Using Pointers Program (Version 2).

/*
 * Program to Swap Two Characters using Pointers.
 */

/*
! Input:
! Please enter first Character: a
! Please enter second Characters: c

! Output:
! Befor swapping:
! first Character: a
! second Character: c
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
char gettingFirstCharacterFun(char firChar);
char gettingSecondCharacterFun(char secChar);
void swapCharactersFun(char *firPoi, char *secPoi);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char firstCharacter, secondCharacter;

    // Call functions.
    firstCharacter = gettingFirstCharacterFun(firstCharacter);
    secondCharacter = gettingSecondCharacterFun(secondCharacter);

    swapCharactersFun(&firstCharacter, &secondCharacter);

    printf("\nAfter swapping ..\n");
    printf("First character: %c\n", firstCharacter);
    printf("Second character: %c\n", secondCharacter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Swap Two Characters Using Pointers Program (Version 2) ..\n\n");
}

// Getting first Character - Function.
char gettingFirstCharacterFun(char firChar)
{
    printf("Please enter a first Character: ");
    scanf("%c", &firChar);

    return firChar;
}

// Getting second Character - Function.
char gettingSecondCharacterFun(char secChar)
{
    printf("Please enter a second Character: ");
    scanf(" %c", &secChar);

    return secChar;
}

// Swap Characters - Function.
void swapCharactersFun(char *firPoi, char *secPoi)
{
    char temp = *firPoi;
    *firPoi = *secPoi;
    *secPoi = temp;
}
//* End Function ..
