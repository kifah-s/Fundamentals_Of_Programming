

//* Rectangle Program (Version 1).

/*
 * Write a program using a struct to represent a rectangle with members length and width,
 * Prompt the user to enter the dimensions,
 * store them in a struct variable, and print the rectangle's area.
 */

/*
! Input:
! Please enter length: 5
! Please enter width: 5

! Output:
! Rectangle area: 30.00
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Rectangle
{
    float length;
    float width;
};
//* End Struct

void welcomeMessageFun();
void rectangleAreaFun(struct Rectangle r);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Rectangle rec1;

    // Calling Functions.
    rectangleAreaFun(rec1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Rectangle Program (Version 1) ..\n\n");
}

//  Rectangle Area - Function.
void rectangleAreaFun(struct Rectangle r)
{
    printf("Please enter length: ");
    scanf("%f", &r.length);

    printf("Please enter width: ");
    scanf("%f", &r.width);

    float recArea = r.length * r.width;

    printf("\nRectangle Area: %.2f", recArea);
}

//* End Function ..
