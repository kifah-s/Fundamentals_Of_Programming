

//* Area And Perimeter Program.

//* Write a program that calculates both the area and perimeter of a rectangle. Use two variables for the length and width of the rectangle. Print the results.

/*
! Output:
! The area of the rectangle with length 5 and width 8 is: 40.
! The perimeter of the rectangle with length 5 and width 8 is: 26.
*/

#include <stdio.h>

void welcomeMessageFun();
int calcAreaFun(int len, int wid, int areaResult);
int calcPerimeterFun(int len, int wid, int perimeterResult);

int main()
{
    welcomeMessageFun();

    int len = 5, wid = 8, areaResult = 0, perimeterResult = 0;

    areaResult = calcAreaFun(len, wid, areaResult);
    printf("The area of the rectangle with length %i and width %i is: %i.\n\n", len, wid, areaResult);

    perimeterResult = calcPerimeterFun(len, wid, perimeterResult);
    printf("The perimeter of the rectangle with length %i and width %i is: %i.", len, wid, perimeterResult);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Area And Perimeter Program ..\n\n");
}

// calc area of the rectangle function.
int calcAreaFun(int len, int wid, int areaResult)
{
    areaResult = len * wid;
    return areaResult;
}

// calc perimeter of the rectangle function.
int calcPerimeterFun(int len, int wid, int perimeterResult)
{
    perimeterResult = (len + wid) * 2;
    return perimeterResult;
}
//* End Function ..
