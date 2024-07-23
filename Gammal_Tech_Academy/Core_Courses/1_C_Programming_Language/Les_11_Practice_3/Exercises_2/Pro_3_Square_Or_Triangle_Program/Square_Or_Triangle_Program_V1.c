

//* Square Or Triangle Program (Version 1).

/*
 * Write a program that prompts the user to choose between a square and a triangle,
 * If the user enters 1, the program should print a square,
 * If the user enters any other number, the program should print a triangle,
 * using a switch statement.
 */

/*
! Input:
! Choose an option:
! 1. Square.
! 2. Triangle.
! Please enter you choice.

! Output:
! Square ..
! **********
! **********
! **********
! **********
*/

#include <stdio.h>

void welcomeMessageFun();
int chooseOptionFun(int cho);
void printSquareFun();
void printTriangleFun();
void squareOrTriangleFun(int cho);

int main()
{
    // Declare Variables.
    int choose = 0;

    squareOrTriangleFun(choose);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Square Or Triangle Program (Version 1) ..\n\n");
}

// Choose Option - Function.
int chooseOptionFun(int cho)
{
    printf("Choose an option:\n1. Square.\n2. Triangle.\n\nPlease enter you choice: ");
    scanf("%i", &cho);

    return cho;
}

// Print Square - Function.
void printSquareFun()
{
    printf("\nSquare ...\n");
    printf("**********\n");
    printf("**********\n");
    printf("**********\n");
    printf("**********\n");
}

// Print Triangle - Function.
void printTriangleFun()
{
    printf("\nTriangle ...\n");
    printf("     *\n");
    printf("    ***\n");
    printf("  *******\n");
    printf("************\n");
}

// Square Or Triangle - Function.
void squareOrTriangleFun(int cho)
{
    welcomeMessageFun();

    cho = chooseOptionFun(cho);

    switch (cho)
    {
    case 1:
        printSquareFun();
        break;

    case 2:
        printTriangleFun();
        break;

    default:
        printf("\nPlease enter number 1 or number 2.");
        break;
    }
}
//* End Function ..
