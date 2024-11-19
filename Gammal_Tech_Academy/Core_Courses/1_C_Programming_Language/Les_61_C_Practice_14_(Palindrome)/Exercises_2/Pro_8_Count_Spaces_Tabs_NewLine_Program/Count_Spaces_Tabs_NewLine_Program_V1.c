

//* Count Spaces Tabs NewLine Program (Version 1).

/*
 * Write a program to count the number of spaces, tabs, and newline characters.
 */

/*
! Input:
! Please enter a string: Hello World

! Output:
! Number of Spaces, Tabs, NewLine: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void calcuLateSpacesTabsNewLineFun(char str[]);


int main()
{
    // Declare Variables.
    char myString[50];

    // Call Functions.
    calcuLateSpacesTabsNewLineFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Spaces Tabs NewLine Program (Version 1) ..\n\n");
}

// Receive String - Function.
void receiveStringFun(char str[])
{
    printf("Please enter a String: ");
    scanf("%[^\n]", str);
}

// Calculate Spaces, Tabs, NewLine - Function.
void calcuLateSpacesTabsNewLineFun(char str[])
{
    int counter = 0;

    welcomeMessageFun();
    receiveStringFun(str);

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            counter++;
        }
    }

    printf("Number of Spaces, Tabs, NewLine: %d\n\n", counter);
}
//* End Function ..
