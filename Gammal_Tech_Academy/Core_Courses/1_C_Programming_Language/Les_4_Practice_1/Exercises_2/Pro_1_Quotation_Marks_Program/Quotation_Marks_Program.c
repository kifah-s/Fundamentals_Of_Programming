

//* Quotation Marks Program.

//* Write a program that asks the user to enter a number and prints the number between quotation marks.

/*
! Input:
! Enter a number: 5

! Output:
! The number between quotation marks is: "5"
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
    printf("\nThe number between quotation marks is: \"%i\"", num);
}
//* End Function ..
