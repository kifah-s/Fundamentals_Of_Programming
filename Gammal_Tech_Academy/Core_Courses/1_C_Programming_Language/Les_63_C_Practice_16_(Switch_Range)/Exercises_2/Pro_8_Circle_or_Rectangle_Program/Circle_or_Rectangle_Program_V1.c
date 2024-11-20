

//* Circle or Rectangle Program (Version 1).

/*
 * Write a program that calculates the area of a geometric shape based on user input
 * (1 for circle, 2 for rectangle).
/*
! Input and Output:
! Please enter 1 for circle OR 2 for rectangle: 2
! Please enter the length of the rectangle: 5
! Please enter the width of the rectangle: 6
! Area of the rectangle: 30.00
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(int cho, int rad, int len, int wid);

int main()
{
    // Declare Variables.
    int myChoose = 0;
    float circleRadius = 0, rectangleLength = 0, rectangleWidth = 0;

    // Call Functions.
    ResultFun(myChoose, circleRadius, rectangleLength, rectangleWidth);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Circle or Rectangle Program (Version 1) ..\n\n");
}

// Receive Choose - Function.
int receiveChooseFun(int cho)
{
    printf("Please enter 1 for circle OR 2 for rectangle: ");
    scanf("%d", &cho);

    return cho;
}

// Receive circle radius - Function.
int receiveCircleRadiusFun(int rad)
{
    printf("Please enter circle radius: ");
    scanf("%d", &rad);

    return rad;
}

// Calculate circle area - Function.
void calculateCircleAreaFun(int rad)
{
    float pay = 3.14, circleArea = 0;
    circleArea = (rad * rad) * pay;

    printf("\nArea of the Circle: %0.2f\n\n", circleArea);
}

// Receive rectangle length - Function.
int receiveRectangleLengthFun(int len)
{
    printf("Please enter rectangle length: ");
    scanf("%d", &len);

    return len;
}

// Receive rectangle Width - Function.
int receiveRectangleWidthFun(int wid)
{
    printf("Please enter rectangle Width: ");
    scanf("%d", &wid);

    return wid;
}

// Calculate Rectangle area - Function.
void calculateRectangleAreaFun(int len, int wid)
{
    float rectangleArea = 0;
    rectangleArea = len * wid;

    printf("\nArea of the rectangle: %0.2f\n\n", rectangleArea);
}

// Result - Function.
void ResultFun(int cho, int rad, int len, int wid)
{
    welcomeMessageFun();
    cho = receiveChooseFun(cho);

    switch (cho)
    {
    case 1:
        rad = receiveCircleRadiusFun(rad);
        calculateCircleAreaFun(rad);
        break;

    case 2:
        len = receiveRectangleLengthFun(len);
        wid = receiveRectangleWidthFun(wid);
        calculateRectangleAreaFun(len, wid);
        break;

    default:
        printf("\nInvalid Choice.\n\n");
        break;
    }
}
//* End Function ..
