

//* Enter Number Program.

//* Write a program that asks the user to enter a number and then prints it on a new line.

/*
! Input:
! Enter a number: 7

! Output:
! The entered number is: 7
*/

#include <stdio.h>

void welcomeMessageFun();
int enterNumberFun(int num);
void printNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare variable.
    int num = 0;
    
    num = enterNumberFun(num);
    printNumberFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Enter Number Program ..\n\n");
}

// Enter number function.
int enterNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Print number function.
void printNumberFun(int num)
{
    printf("\nThe entered number is: %i", num);
}
//* End Function ..
