

//* Choice 1 Or 2 Program (Version 1).

/*
 * Write a program that prompts the user to enter a choice (1 or 2),
 * If the choice is 1, the program should calculate and print the area of a rectangle,
 * If the choice is 2, it should calculate and print the perimeter of the rectangle.
 */

/*
! Input:
! Please enter 1 to calculate "area" or 2 to calculate "perimeter": 2
! Please enter length of the rectangle: 4
! Please enter width of the rectangle: 4

! Output:
! perimeter of the rectangle: 16
*/

#include <stdio.h>

void welcomeMessageFun();
int choice1Or2Fun(int cho);
void calculateAreaFun(int len, int wid, int area);
void calculatePerimeterFun(int len, int wid, int per);
void printResultFun(int len, int wid, int area, int per);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int recLength = 0, recWidth = 0, recArea = 0, recPerimeter = 0;

    printResultFun(recLength, recWidth, recArea, recPerimeter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Choice 1 Or 2 Program (Version 1) ..\n\n");
}

// Choice 1 Or 2 - Function.
int choice1Or2Fun(int cho)
{
    printf("Please enter 1 to calculate \"area\" or 2 to calculate \"perimeter\": ");
    scanf("%i", &cho);

    return cho;
}

// Calculate Area - Function.
void calculateAreaFun(int len, int wid, int area)
{
    printf("\nPlease enter length of the rectangle: ");
    scanf("%i", &len);

    printf("\nPlease enter width of the rectangle: ");
    scanf("%i", &wid);

    area = len * wid;

    printf("\nArea of the rectangle: %i", area);
}

// Calculate Perimeter - Function.
void calculatePerimeterFun(int len, int wid, int per)
{
    printf("\nPlease enter length of the rectangle: ");
    scanf("%i", &len);

    printf("\nPlease enter width of the rectangle: ");
    scanf("%i", &wid);

    per = (len + wid) * 2;

    printf("\nPerimeter of the rectangle: %i", per);
}

// Print Result - Function.
void printResultFun(int len, int wid, int area, int per)
{
    int cho = choice1Or2Fun(cho);

    switch (cho)
    {
    case 1:
        calculateAreaFun(len, wid, area);
        break;

    case 2:
        calculatePerimeterFun(len, wid, per);
        break;
    }
}
//* End Function ..
