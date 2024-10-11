

//* Typedef For Enumeration Program (Version 1).

/*
 * Define a typedef for an enumeration named MyColor with values RED, GREEN, and BLUE.
 * Create a program that declares and prints the value of a MyColor variable.
 */

/*
! Output:
! Color: Green
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef enum
{
    Red,
    Green,
    Blue
} MyColor;

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    MyColor secColor = Green;

    switch (secColor)
    {
    case Red:
        printf("Color: Red");
        break;

    case Green:
        printf("Color: Green");
        break;

    case Blue:
        printf("Color: Blue");
        break;

    default:
        break;
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Enumeration Program (Version 1) ..\n\n");
}
//* End Function ..
