

//* 2D Space Program (Version 1).

/*
 * Create a program that uses a struct to represent a point in 2D space,
 * Prompt the user to enter the coordinates of a point,
 * store the values in a struct variable, and print the point's coordinates.
 */

/*
! Input:
! Enter x coordinate: 5
! Enter x coordinate: 6

! Output:
! Point coordinates: (5, 6).
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Point
{
    int x;
    int y;
};
//* End Struct

void welcomeMessageFun();
void pointCoordinatesFun(struct Point p);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Point poi1;

    // Calling Functions.
    pointCoordinatesFun(poi1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in 2D Space Program (Version 1) ..\n\n");
}

// Getting and Print Point Details - Function.
void pointCoordinatesFun(struct Point p)
{
    printf("Enter x coordinate: ");
    scanf("%d", &p.x);

    printf("Enter y coordinate: ");
    scanf("%d", &p.y);

    printf("\nPoint coordinates: (%d, %d)", p.x, p.y);
}

//* End Function ..
