

//* Simple Shapes Program (Version 1).

/*
 * Create a program that uses an enumeration for simple
 * shapes (Circle, Square, and Triangle). Prompt the user to
 * enter a number (1-3) to select a shape and print the
 * selected shape.
 */

/*
! Input:
! Please enter a number (1 - 3) to select a Simple Shapes: 2

! Output:
! Selected Simple Shapes: Square.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum simpleShapes
{
    Circle = 1,
    Square,
    Triangle
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printTSimpleShapesFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printTSimpleShapesFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Simple Shapes Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 3) to select a Simple Shapes: ");
    scanf("%d", &n);

    return n;
}

// Print Simple Shapes - Function.
void printTSimpleShapesFun(int n)
{
    if (n >= Circle && n <= Triangle)
    {
        printf("Selected Simple Shapes: ");
        switch (n)
        {
        case Circle:
            printf("Circle.");
            break;

        case Square:
            printf("Square.");
            break;

        case Triangle:
            printf("Triangle.");
            break;

        default:
            break;
        }
    }
    else
    {
        printf("Invalid input, please enter a number between 1 and 3.");
    }
}
//* End Function ..
