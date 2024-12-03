

//* Reverse Order Program (Version 1).

/*
* Write a program to read a line and print it in reverse order.

! Input:
! Please Enter a line: kifah saloum

! Output:
! Reverse Line: muolas hafik
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printReverseLineFun(char li[100]);

int main()
{
    // Declare Variables.
    char line[100];

    // Call Functions.
    printReverseLineFun(line);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 1) ..\n\n");
}

// Read Line - Function.
void readLineFun(char li[100])
{
    printf("Please Enter a Line: ");
    scanf("%[^\n]", li);
}

// Print Reverse Line - Function.
void printReverseLineFun(char li[100])
{
    welcomeMessageFun();
    readLineFun(li);

    printf("\nReverse Line: ");
    for (int i = strlen(li) - 1; i >= 0; i--)
    {
        printf("%c", li[i]);
    }
    printf("\n\n");
}
//* End Function ..
