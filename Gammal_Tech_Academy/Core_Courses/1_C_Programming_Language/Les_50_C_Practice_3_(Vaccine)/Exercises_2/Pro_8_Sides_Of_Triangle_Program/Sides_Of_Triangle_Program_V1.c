

//* Sides Of Triangle Program (Version 1).

/*
 * Write a program that takes three sides of a triangle (a, b, c) as input,
 * and determines whether it is an equilateral, isosceles, or scalene triangle.
 */

/*
! Input:
! Please enter three sides of the triangle:
! side 1: 5
! side 2: 6
! side 3: 6

! Output:
! Isosceles triangle.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveSide1Fun(int s1);
int receiveSide2Fun(int s2);
int receiveSide3Fun(int s3);
void checkTriangleFun(int s1, int s2, int s3);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int side1 = 0, side2 = 0, side3 = 0;

    // Call Functions.
    checkTriangleFun(side1, side2, side3);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sides Of Triangle Program (Version 1) ..\n\n");
}

// Receive side 1 - Function.
int receiveSide1Fun(int s1)
{
    printf("Please enter three sides of the triangle:\n");
    printf("Please enter side 1: ");
    scanf("%d", &s1);

    return s1;
}

// Receive side 2 - Function.
int receiveSide2Fun(int s2)
{
    printf("Please enter side 2: ");
    scanf("%d", &s2);

    return s2;
}

// Receive side 3 - Function.
int receiveSide3Fun(int s3)
{
    printf("Please enter side 3: ");
    scanf("%d", &s3);

    return s3;
}

// Check triangle - Function.
void checkTriangleFun(int s1, int s2, int s3)
{
    s1 = receiveSide1Fun(s1);
    s2 = receiveSide2Fun(s2);
    s3 = receiveSide3Fun(s3);

    if (s1 == s2 && s2 == s3)
    {
        printf("\nEquilateral Triangle.");
    }
    else if (s1 == s2 || s1 == s3 || s2 == s3)
    {
        printf("\nIsosceles Triangle.");
    }
    else
    {
        printf("\nScalene Triangle.");
    }
}
//* End Function ..
