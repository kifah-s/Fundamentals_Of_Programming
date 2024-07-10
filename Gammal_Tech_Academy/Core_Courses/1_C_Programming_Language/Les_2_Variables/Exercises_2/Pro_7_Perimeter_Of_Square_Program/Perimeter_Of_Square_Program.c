

//* Perimeter Of Square Program.

//* Write a program that calculates the perimeter of a square. Use a variable for the side length of the square. Print the result.

/*
! Output:
! The perimeter of the square with side length 6 is: 24.
*/

#include <stdio.h>

void welcomeMessageFun();
int perimeterOfSquareFun(int len, int per);

int main()
{
    welcomeMessageFun();

    int length = 6, perimeter = 0;
    perimeter = perimeterOfSquareFun(length, perimeter);
    printf("The perimeter of the square with side length %i is: %i.", length, perimeter);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Perimeter Of Square Program ..\n\n");
}

// Perimeter Of Square function.
int perimeterOfSquareFun(int len, int per)
{
    per = len * 4;

    return per;
}
//* End Function ..
