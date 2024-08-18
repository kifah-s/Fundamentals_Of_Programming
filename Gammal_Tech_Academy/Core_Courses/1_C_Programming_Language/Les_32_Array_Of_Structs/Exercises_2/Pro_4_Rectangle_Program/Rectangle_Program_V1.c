

//* Rectangle Program (Version 1).

/*
 * Create a program that uses a struct named Rectangle to represent information about a rectangle,
 * including its length and width,
 * Initialize an array of 2 Rectangle structures with some data and calculate and print the area of each rectangle.
 */

/*
! Output:
! Rectangle 1:
! Length: 5.00
! Width: 3.00
! Area: 15.00

! Rectangle 2:
! Length: 7.00
! Width: 4.50
! Area: 31.50
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Rectangle
{
    float length, width;
};
//* End Struct

void welcomeMessageFun();
void rectangleAreaFun(struct Rectangle r[2], float a);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Rectangle rec[2] = {{5.00, 3.00}, {7.00, 4.50}};

    // Declare Variable.
    float area = 0;

    // Calling Functions.
    rectangleAreaFun(rec, area);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Rectangle Program (Version 1) ..\n\n");
}

//  Calc Rectangle Area - Function.
void rectangleAreaFun(struct Rectangle r[2], float a)
{
    for (int i = 0; i < 2; i++)
    {
        printf("Rectangle %d:\n", i + 1);
        printf("Length: %0.2f\n", r[i].length);
        printf("Width: %0.2f\n", r[i].width);

        // Calc Area.
        a = (r[i].length * r[i].width);
        printf("Area: %0.2f\n\n", a);
    }
}
//* End Function ..
