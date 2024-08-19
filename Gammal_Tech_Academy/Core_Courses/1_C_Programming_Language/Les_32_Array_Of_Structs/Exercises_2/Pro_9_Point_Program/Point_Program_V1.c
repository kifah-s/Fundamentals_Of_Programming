

//* Point Program (Version 1).

/*
 * Create a program that uses a struct named Point to represent a point in 2D space with x and y coordinates,
 * Initialize an array of 3 Point structures with some data and print their coordinates.
 */

/*
! Output:
! Point 1:
! x: 2.50
! y: 3.00

! Point 2:
! x: 1.00
! y: 4.50

! Point 3:
! x: -2.00
! y: 1.50
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Point
{
    float x, y;
};
//* End Struct

void welcomeMessageFun();
void pointDetailsFun(struct Point p[3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Point pointes[3] = {{2.50, 3.00}, {1.00, 4.50}, {-2.00, 1.50}};

    // Calling Functions.
    pointDetailsFun(pointes);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Point Program (Version 1) ..\n\n");
}

//  Point Details - Function.
void pointDetailsFun(struct Point p[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nPoint %d:\n", i + 1);
        printf("x: %0.2f\n", p[i].x);
        printf("y: %0.2f\n", p[i].y);
    }
}
//* End Function ..
