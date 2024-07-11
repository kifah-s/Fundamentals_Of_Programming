

//* Prints Complement Program.

//* Write a program that asks the user to enter a number from 1 to 9 and prints its complement, making the sum of both numbers equal to 10.

/*
! Input:
! Enter a number from 1 to 9: 8

! Output:
! The Complement of 8 is: 2
*/

#include <stdio.h>

void welcomeMessageFun();
int enterNumberFun(int num);
int complementNumberFun(int num, int complementNum);
void printNumberFun(int num, int complementNum);

int main()
{
    welcomeMessageFun();

    // Declare variable.
    int number = 0, complementNumber = 0;

    number = enterNumberFun(number);
    complementNumber = complementNumberFun(number, complementNumber);
    printNumberFun(number, complementNumber);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Prints Complement Program ..\n\n");
}

// Enter number function.
int enterNumberFun(int num)
{
    printf("Please enter a number from 1 to 9: ");
    scanf("%i", &num);

    return num;
}

// Complement number function.
int complementNumberFun(int num, int complementNum)
{
    complementNum = 10 - num;

    return complementNum;
}

// Print number function.
void printNumberFun(int num, int complementNum)
{
    printf("\nThe Complement of %i is: %i", num, complementNum);
}
//* End Function ..
