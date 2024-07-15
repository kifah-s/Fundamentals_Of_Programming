

//* Square Or Triangle Program (Version 1).

/*
 * Write a program that asks the user to choose between a square and a triangle.
 * If the user enters 1, the program should print a square.
 * If the user enters any number, the program should print a triangle.
 */

/*
! Input:
! Choose the shape:
! 1. Square.
! 2. Triangle.
! Please enter your choice (1 Or 2): 1

! Output:
! ******
! ******
! ******
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingChooseFun(int cho);
void printSquareFun();
void printTriangleFun();
void squareOrTriangleFun(int cho);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int choice = 0;

    choice = gettingChooseFun(choice);
    squareOrTriangleFun(choice);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Square Or Triangle Program (Version 1) ..\n\n");
}

// Getting choose function.
int gettingChooseFun(int cho)
{
    printf("Please Choose the shape: \n");
    printf("1. Square.\n2. Triangle.\n");
    printf("\nPlease enter your choice (1 Or 2): ");
    scanf("%i", &cho);

    return cho;
}

// Print Square function.
void printSquareFun()
{
    printf("\n********\n********\n********\n********");
}

// Print Triangle function.
void printTriangleFun()
{
    printf("\n      *\n     ***\n    *****\n   *******\n  *********\n ***********");
}

// Square Or Triangle function.
void squareOrTriangleFun(int cho)
{

    if (cho == 1)
    {
        printSquareFun();
    }
    else
    {
        printTriangleFun();
    }
}

//* End Function ..
