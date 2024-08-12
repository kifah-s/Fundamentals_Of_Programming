

//* Copy Contents Program (Version 1).

/*
 * Write a program that prompts the user to enter two names and stores them in a 2D character array x,
 * Use scanf to read the input. After reading both names,
 * copy the contents of the second name into the first name using strcpy,
 * and then print the updated content of the first name,
 * Do not use loops (for, while, etc.) in the solution.
 */

/*
! Input:
! Please enter first name: aly
! Please enter second name: kifah

! Output:
! kifah
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNamesFun(char arr1[2][25]);
void copyContentsFun(char arr1[2][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char names[2][25];

    // Calling Functions.
    gettingNamesFun(names);
    copyContentsFun(names);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Copy Contents Program (Version 1) ..\n\n");
}

// Getting Names - Function.
void gettingNamesFun(char arr1[2][25])
{
    printf("Please enter first name: ");
    scanf("%s", arr1[0]);

    printf("Please enter second name: ");
    scanf("%s", arr1[1]);
}

// Copy Contents - Function.
void copyContentsFun(char arr1[2][25])
{
    strcpy(arr1[0], arr1[1]);

    printf("\nFirst name: %s", arr1[0]);
}
//* End Function ..
