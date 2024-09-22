

//* Calculate Sum Using Pointers Program (Version 3).

/*
 * Program to Calculate the Sum of Two Numbers using Pointers.
 */

/*
! Input:
! Please enter first number: 5
! Please enter second number: 7

! Output:
! Sum of 5 and 7 is: 12
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int sumTowNumbersFun(int *num1, int *num2, int *sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, sum = 0;

    printf("Please enter a first number: ");
    scanf("%d", &firstNumber);

    printf("Please enter a second number: ");
    scanf("%d", &secondNumber);

    sumTowNumbersFun(&firstNumber, &secondNumber, &sum);

    /*
    ! Note: parameter function -> sumTowNumbersFun(&firstNumber, &secondNumber, &sum) .. same:
    num1 = &firstNumber;
    num2 = &secondNumber;
    sum = &sum;
    */

    printf("\nSum of %d and %d is: %d", firstNumber, secondNumber, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Sum Using Pointers Program (Version 3) ..\n\n");
}

// Sum tow numbers - Function.
int sumTowNumbersFun(int *num1, int *num2, int *sum)
{
    *sum = *num1 + *num2;
}
//* End Function ..
