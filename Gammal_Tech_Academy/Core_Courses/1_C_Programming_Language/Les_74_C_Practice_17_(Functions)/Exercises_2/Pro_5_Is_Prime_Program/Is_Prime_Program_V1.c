

//* Is Prime Program (Version 1).

/*
* Write a program with a function isPrime that takes an integer as input and returns 1 if it's prime and 0 if it's not prime.
* In the main function, take an integer input, call the isPrime function, and print whether the number is prime or not.

! Input:
! Please enter an integer: 7

! Output:
! The number is Prime.
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
    printf("\n\nYou welcome in Is Prime Program (Version 1) ..\n\n");
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
    if (num <= 1)
    {
        return 0; // Not Prime
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i != 0)
        {
            return 1; // Prime
        }
        else
        {
            return 0; // Not Prime
        }
    }
}

// Result - Function.
void resultFun(int num)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    if (checkNumberFun(num))
    {
        printf("\nThe number is Prime.\n\n");
    }
    else
    {
        printf("\nThe number is Not Prime.\n\n");
    }
}
//* End Function ..
