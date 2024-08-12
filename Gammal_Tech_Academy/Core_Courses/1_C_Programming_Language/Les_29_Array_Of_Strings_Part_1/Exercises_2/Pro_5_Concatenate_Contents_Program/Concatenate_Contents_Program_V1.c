

//* Concatenate Contents Program (Version 1).

/*
 * Write a program that prompts the user to enter two names and stores them in a 2D character array x,
 * Use scanf to read the input. After reading both names,
 * concatenate the contents of the second name to the first name using strcat,
 * and then print the updated content of the first name,
 * Do not use loops (for, while, etc.) in the solution.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter second name: amr

! Output:
! kifahamr
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNamesFun(char arr1[2][25]);
void concatenateContentsFun(char arr1[2][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char names[2][25];

    // Calling Functions.
    gettingNamesFun(names);
    concatenateContentsFun(names);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Contents Program (Version 1) ..\n\n");
}

// Getting Names - Function.
void gettingNamesFun(char arr1[2][25])
{
    printf("Please enter first name: ");
    scanf("%s", arr1[0]);

    printf("Please enter second name: ");
    scanf("%s", arr1[1]);
}

// Concatenate Contents - Function.
void concatenateContentsFun(char arr1[2][25])
{
    strcat(arr1[0], arr1[1]);

    printf("\n%s", arr1[0]);
}
//* End Function ..
