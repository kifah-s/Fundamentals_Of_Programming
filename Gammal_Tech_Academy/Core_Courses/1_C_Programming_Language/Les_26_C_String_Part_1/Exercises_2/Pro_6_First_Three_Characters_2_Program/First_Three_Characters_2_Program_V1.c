

//* First Three Characters 2 Program (Version 1).

/*
 * Write a program that prompts the user to enter his first and last name separately,
 * stores them in different character arrays, and then prints the first three letters of each name,
 * Note that the name must contain at least 3 characters.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter last name: saloum

! Output:
! First three characters of the first name: k i f
! First three characters of the last name: s a l
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingFirstNameFun(char arr1[25]);
void gettingSecondNameFun(char arr2[25]);
void printFirstThreeCharactersFun(char arr1[25], char arr2[25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char firstName[25], secondName[25];

    // Calling Functions.
    gettingFirstNameFun(firstName);
    gettingSecondNameFun(secondName);
    printFirstThreeCharactersFun(firstName, secondName);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First Three Characters Program (Version 1) ..\n\n");
}

// Getting first name - Function.
void gettingFirstNameFun(char arr1[25])
{
    printf("Please enter first name: ");
    scanf("%s", arr1);
}

// Getting second name - Function.
void gettingSecondNameFun(char arr2[25])
{
    printf("Please enter second name: ");
    scanf("%s", arr2);
}

// Print first three characters - Function.
void printFirstThreeCharactersFun(char arr1[25], char arr2[25])
{
    printf("\nFirst three characters of first name: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c ", arr1[i]);
    }
    
    printf("\nFirst three characters of second name: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c ", arr2[i]);
    }
}

//* End Function ..
