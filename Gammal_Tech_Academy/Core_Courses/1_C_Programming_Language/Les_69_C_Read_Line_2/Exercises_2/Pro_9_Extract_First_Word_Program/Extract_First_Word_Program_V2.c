

//* Extract First Word Program (Version 2).

/*
* Write a program to read a line and extract the first word.

! Input:
! Please Enter a line: Extract first word

! Output:
! First Word: Extract
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printFirstWordFun(char firWor[25]);

int main()
{
    // Declare Variables.
    char firstWord[25];

    // Call Functions.
    printFirstWordFun(firstWord);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Extract First Word Program (Version 2) ..\n\n");
}

// Read Line - Function.
void readLineFun(char firWor[25])
{
    printf("Please Enter a Line: ");
    scanf("%s", firWor);
}

// Extract First Word - Function.
// void extractFirstWordFun(char li[100], char firWor[25])
// {
//     for (int i = 0; li[i] != ' '; i++)
//     {
//         firWor[i] = li[i];
//     }
// }

// Print First Word - Function.
void printFirstWordFun(char firWor[25])
{
    welcomeMessageFun();
    readLineFun(firWor);

    printf("\nFirst Word: %s\n\n", firWor);
}
//* End Function ..
