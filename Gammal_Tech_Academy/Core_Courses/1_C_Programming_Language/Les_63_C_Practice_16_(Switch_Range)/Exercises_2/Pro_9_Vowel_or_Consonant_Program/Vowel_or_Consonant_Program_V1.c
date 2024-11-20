

//* Vowel or Consonant Program (Version 1).

/*
 * Write a program that checks if a given character is a vowel or a consonant.
/*
! Input:
! Please enter a character: E

! Output:
! E is a Vowel
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void checkCharacterFun(char ch);

int main()
{
    // Declare Variables.
    char myCharacter;

    // Call Functions.
    checkCharacterFun(myCharacter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Vowel or Consonant Program (Version 1) ..\n\n");
}

// Receive Character - Function.
char receiveCharacterFun(char ch)
{
    printf("Please enter character: ");
    scanf("%c", &ch);

    return ch;
}

// Check character - Function.
void checkCharacterFun(char ch)
{
    welcomeMessageFun();
    ch = receiveCharacterFun(ch);

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("\n%c is a Vowel.\n\n", ch);
        break;

    default:
        printf("\n%c is a Consonant.\n\n", ch);
        break;
    }
}
//* End Function ..
