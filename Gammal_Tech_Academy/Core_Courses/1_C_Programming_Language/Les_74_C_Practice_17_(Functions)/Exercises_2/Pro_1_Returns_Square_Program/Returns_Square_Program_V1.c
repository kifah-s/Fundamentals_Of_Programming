

//* Returns Square Program (Version 1).

/*
* Write a program that defines a function getSquarewhich takes an integer as input and returns its square,
* In the main function, take an integer input,
* call the getSquare function, and print the result.

! Input:
! Please enter an integer: 5

! Output:
! Square: 25
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int squ);

int main()
{
    // Declare Variables.
    int number = 0, square = 0;

    // Call Functions.
    resultFun(number, square);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Returns Square Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int num)
{
    printf("Please enter an integer: ");
    scanf("%d", &num);

    return num;
}

// Calculate Square - Function.
int calculateSquareFun(int num, int squ)
{
    // Calculate Square
    squ = num * num;

    return squ;
}

// Result - Function.
void resultFun(int num, int squ)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    // printf("Square: %d\n\n", calculateSquareFun(num, squ));
    squ = calculateSquareFun(num, squ);
    printf("Square: %d\n\n", squ);
}
//* End Function ..
