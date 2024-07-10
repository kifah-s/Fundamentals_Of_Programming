

//* Sum of two integers 2 Program ..

//* Write a program to prints the result of sum two numbers and records the result in a third variable ..

/*
! Output:
! The sum of 10 and 20 is: 30
*/

#include <stdio.h>

void welcomeMessageFun();
int sumOfTwoIntegers2Fun(int num1, int num2, int result);

int main()
{
    welcomeMessageFun();

    int x = 10, y = 20, sum = 0;

    sum = sumOfTwoIntegers2Fun(x, y, sum);

    printf("The sum of %i and %i is: %i\n\n",x, y, sum);

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in sum of two integers 2 Program ..\n\n");
}

// sum of two integers 2 function.
int sumOfTwoIntegers2Fun(int num1, int num2, int result)
{
    result = num1 + num2;

    return result;
}
//* End Function ..
