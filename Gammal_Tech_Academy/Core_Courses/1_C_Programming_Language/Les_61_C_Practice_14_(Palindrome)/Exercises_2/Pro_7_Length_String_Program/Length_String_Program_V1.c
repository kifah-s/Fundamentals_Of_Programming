

//* Length String Program (Version 1).

/*
 * Create a program to find the length of a given string.
 */

/*
! Input:
! Please enter a string: Hello World

! Output:
! Length of the string: 11
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void calcuLateLengthFun(char str[]);

int main()
{
    // Declare Variables.
    char myString[50];

    // Call Functions.
    calcuLateLengthFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Length String Program (Version 1) ..\n\n");
}

// Receive String - Function.
void receiveStringFun(char str[])
{
    printf("Please enter a String: ");
    scanf("%[^\n]", str);
}

// Calculate Length - Function.
void calcuLateLengthFun(char str[])
{
    welcomeMessageFun();
    receiveStringFun(str);

    int len = strlen(str);
    printf("%d\n\n", len);
}
//* End Function ..
