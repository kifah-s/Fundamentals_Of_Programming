

//* Print Table Program (Version 1).

/*
* Create a C program with a function printTable that takes an integer as input and prints its multiplication table up to 10.
* In the main function, take an integer input, call the printTable function, and display the multiplication table.

! Input:
! Please enter an integer: 3

! Output:
! 3 x 1 = 3
! 3 x 2 = 6
! 3 x 3 = 9
! 3 x 4 = 12
! 3 x 5 = 15
! 3 x 6 = 18
! 3 x 7 = 21
! 3 x 8 = 24
! 3 x 9 = 27
! 3 x 10 = 30
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num);

int main()
{
    // Declare Variables.
    int number = 0;

    // Call Functions.
    resultFun(number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Print Table Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int num)
{
    printf("Please enter an integer: ");
    scanf("%d", &num);

    return num;
}

// Print Table - Function.
int printTableFun(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    printTableFun(num);

    printf("\n\n");
}
//* End Function ..
