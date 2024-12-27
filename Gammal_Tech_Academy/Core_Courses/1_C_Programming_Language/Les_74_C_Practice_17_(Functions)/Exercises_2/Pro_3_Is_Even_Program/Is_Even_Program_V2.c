

//* Is Even Program (Version 2).

/*
* Write a program with a function isEven that takes an integer as input and returns 1 if it's even and 0 if it's odd.
* In the main function, take an integer input, call the isEven function, and print whether the number is even or odd.

! Input:
! Please enter an integer: 6

! Output:
! The number is Even.
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
    printf("\n\nYou welcome in Is Even Program (Version 2) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int num)
{
    printf("Please enter an integer: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
int checkNumberFun(int num)
{
    return (num % 2 == 0 ? 1 : 0);
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    if (checkNumberFun(num))
    {
        printf("The number is Even.\n\n");
    }
    else
    {
        printf("The number is Odd.\n\n");
    }
}
//* End Function ..
