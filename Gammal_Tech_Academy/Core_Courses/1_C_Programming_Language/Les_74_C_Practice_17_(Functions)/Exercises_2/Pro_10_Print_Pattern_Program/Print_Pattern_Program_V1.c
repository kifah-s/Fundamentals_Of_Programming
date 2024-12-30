

//* Print Pattern Program (Version 1).

/*
* Write a program with a function printPattern that takes an integer as input and prints the following pattern.

! Input:
! Please enter a number: 7

! Output:
! 1
! 12
! 123
! 1234
! 12345
! 123456
! 1234567
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
    printf("\n\nYou welcome in Print Pattern Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Print Pattern - Function.
void printPatternFun(int num)
{
    
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    printPatternFun(num);

    printf("\n\n");
}
//* End Function ..
