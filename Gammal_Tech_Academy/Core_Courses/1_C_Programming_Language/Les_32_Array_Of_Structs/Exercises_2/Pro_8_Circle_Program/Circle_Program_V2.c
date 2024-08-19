

//* Circle Program (Version 2).

/*
 * Create a program that uses a struct named Circle to represent information about a circle,
 * including its radius and area. Ask the user to input data for three circles, then print their details.
 */

/*
! Input:
! Please enter details for Circle 1:
! Radius: 5.2

! Please enter details for Circle 2:
! Radius: 6.3

! Please enter details for Circle 3:
! Radius: 3.2

! Output:
! Details for Circle 1:
! Radius: 5.2
! Area: 84.91

! Output:
! Details for Circle 2:
! Radius: 6.3
! Area: 124.63

! Output:
! Details for Circle 3:
! Radius: 3.2
! Area: 32.15

*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Circle
{
    float radius;
    float area;
};
//* End Struct

void welcomeMessageFun();
void circleDetailsFun(struct Circle c[3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Circle circles[3];

    // Calling Functions.
    circleDetailsFun(circles);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Circle Program (Version 2) ..\n\n");
}

//  Circles Details - Function.
void circleDetailsFun(struct Circle c[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nPlease enter details for circle %d:\n", i + 1);
        printf("Radius: ");
        scanf("%f", &c[i].radius);

        // Calc Area.
        c[i].area = (c[i].radius * c[i].radius) * 3.14;
    }
    // Print Details.
    for (int i = 0; i < 3; i++)
    {
        printf("\nDetails for Circle %d:\n", i + 1);
        printf("Radius: %0.2f\n", c[i].radius);
        printf("Area: %0.2f\n", c[i].area);
    }
}
//* End Function ..
