

//* Circle Program (Version 1).

/*
 * Write a program that defines a struct called Circle with a member radius (float),
 * Prompt the user to enter the radius of a circle,
 * store it in a struct variable, and print the circle's area.
 */

/*
! Input:
! Please enter the radius of the circle: 5.2

! Output:
! Circle area: 84.91
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Circle
{
    float radius;
};
//* End Struct

void welcomeMessageFun();
void circleAreaFun(struct Circle c);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Circle cir1;

    // Calling Functions.
    circleAreaFun(cir1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Circle Program (Version 1) ..\n\n");
}

//  Circle Area - Function.
void circleAreaFun(struct Circle c)
{
    printf("Please enter the radius of the circle: ");
    scanf("%f", &c.radius);

    float r = 3.14;
    float cirArea = (c.radius * c.radius) * r;

    printf("\nCircle area: %.2f", cirArea);
}

//* End Function ..
