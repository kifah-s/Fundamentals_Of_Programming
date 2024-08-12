

//* Compare Names Program (Version 1).

/*
 * Write a program that prompts the user to enter two names and stores them in a 2D character array x,
 * Use scanf to read the input. After reading both names,
 * compare the names using strcmp and print "true" if they are equal,
 * and "false" if they are not equal,
 * Do not use loops (for, while, etc.) in the solution.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter second name: kifah

! Output:
! True.
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
void gettingNamesFun(char arr1[2][25]);
void compareNamesFun(char arr1[2][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char names[2][25];

    // Calling Functions.
    gettingNamesFun(names);
    compareNamesFun(names);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Compare Names Program (Version 1) ..\n\n");
}

// Getting Names - Function.
void gettingNamesFun(char arr1[2][25])
{
    printf("Please enter first name: ");
    scanf("%s", arr1[0]);

    printf("Please enter second name: ");
    scanf("%s", arr1[1]);
}

// Compare Names - Function.
void compareNamesFun(char arr1[2][25])
{
    int result = strcmp(arr1[0], arr1[1]);

    if (result == 0)
    {
        printf("\nTrue.");
    }
    else
    {
        printf("\nFalse.");
    }
}
//* End Function ..
