

//* Sum of two integers Program ..

//* Write a program to print the sum of two integers ..

/*
! Output:
! sum: 15
*/

#include <stdio.h>

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in sum of two integers Program ..\n\n");
}

// sum of two integers function.
int sumOfTwoIntegersFun(int num1, int num2)
{
    int result = 0;

    result = num1 + num2;

    return result;
}
//* End Function ..

int main()
{
    welcomeMessageFun();

    int x = 10, y = 5, sum = 0;

    sum = sumOfTwoIntegersFun(x, y);

    printf("sum: %d\n\n", sum);

    return 0;
}