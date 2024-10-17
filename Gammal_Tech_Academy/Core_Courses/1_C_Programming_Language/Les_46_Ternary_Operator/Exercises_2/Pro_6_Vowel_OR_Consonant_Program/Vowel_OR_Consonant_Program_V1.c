

//* Vowel OR Consonant Program (Version 1).

/*
 * Check if a character is a vowel or consonant using the ternary operator.
 */

/*
! Input:
! Please enter a character: o

! Output:
! It is a vowel.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
char gettingCharacterFun(char c);
void checkCharacterFun(char c);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    char myChar;

    // Call Functions.
    checkCharacterFun(myChar);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Vowel OR Consonant Program (Version 1) ..\n\n");
}

// Getting Number - Function.
char gettingCharacterFun(char c)
{
    printf("Please enter a character: ");
    scanf("%c", &c);

    return c;
}

// Check Character - Function.
void checkCharacterFun(char c)
{
    c = gettingCharacterFun(c);

    (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
        ? printf("\nIt is a Vowel.")
        : printf("\nIt is a Consonants.");
}

//* End Function ..
