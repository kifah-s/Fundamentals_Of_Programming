

//* Extract First Word Program (Version 1).

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

void printFirstWordFun(char li[100], char firWor[25]);

int main()
{
    // Declare Variables.
    char line[100], firstWord[25];

    // Call Functions.
    printFirstWordFun(line, firstWord);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Extract First Word Program (Version 1) ..\n\n");
}

// Read Line - Function.
void readLineFun(char li[100])
{
    printf("Please Enter a Line: ");
    scanf("%[^\n]", li);
}

// Extract First Word - Function.
void extractFirstWordFun(char li[100], char firWor[25])
{
    for (int i = 0; li[i] != ' '; i++)
    {
        firWor[i] = li[i];
    }
}

// Print First Word - Function.
void printFirstWordFun(char li[100], char firWor[25])
{
    welcomeMessageFun();
    readLineFun(li);
    extractFirstWordFun(li, firWor);

    // printf("\nFirst Word: %s\n\n", firWor);
    printf("\nFirst Word: ");
    for (int i = 0; i < strlen(firWor) - 1; i++)
    {
        printf("%c", firWor[i]);
    }
    printf("\n\n");
}
//* End Function ..
