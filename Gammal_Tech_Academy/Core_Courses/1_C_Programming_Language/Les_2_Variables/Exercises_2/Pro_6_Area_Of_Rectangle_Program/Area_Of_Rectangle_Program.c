

//* Area Of Rectangle Program.

//* Write a program that calculates the area of a rectangle. Use two variables for the length and width of the rectangle. Print the result.

/*
! Output:
! The area of the rectangle with length 5 and width 8 is: 40.
*/

#include <stdio.h>

void welcomeMessageFun();
int areaOfRectangleFun(int len, int wit, int area);

int main()
{
    welcomeMessageFun();

    int length = 5, width = 8, area = 0;
    area = areaOfRectangleFun(length, width, area);
    printf("The area of the rectangle with length %i and width %i is: %i.", length, width, area);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Area Of Rectangle Program ..\n\n");
}

// Area of rectangle function.
int areaOfRectangleFun(int len, int wid, int area)
{
    area = len * wid;

    return area;
}
//* End Function ..
