

//* Triangle Program (Version 1).

/*
 * Write a program using a struct to represent a triangle with members base and height (both floats),
 * Prompt the user to enter the base and height, store them in a struct variable,
 * and print the triangle's area.
 */

/*
! Input:
! Please enter the base of the triangle: 2.6
! Please enter the hight of the triangle: 6.2

! Output:
! Triangle area: 8.06
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Triangle
{
    float base, height;
};
//* End Struct

void welcomeMessageFun();
void triangleAreaFun(struct Triangle t);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Triangle tri1;

    // Calling Functions.
    triangleAreaFun(tri1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Triangle Program (Version 1) ..\n\n");
}

//  Triangle Area - Function.
void triangleAreaFun(struct Triangle t)
{
    printf("Please enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Please enter the hight of the triangle: ");
    scanf("%f", &t.height);

    float triArea = (t.base * t.height) / 2;

    printf("\nTriangle area: %.2f", triArea);
}

//* End Function ..
