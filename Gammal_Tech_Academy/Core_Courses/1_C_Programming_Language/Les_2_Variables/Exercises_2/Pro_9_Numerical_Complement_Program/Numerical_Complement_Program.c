

//* Numerical Complement Program.

//* Write a program that calculates the numerical complement of a given number with respect to 10. For example, the complement of 6 with respect to 10 is 4.

/*
! Output:
! The numerical Complement of 6 with respect to 10 is: 4.
*/

#include <stdio.h>

void welcomeMessageFun();
int numericalComplementFun(int num, int res);

int main()
{
    welcomeMessageFun();

    int number = 6, result = 0;
    result = numericalComplementFun(number, result);
    printf("The numerical Complement of %i with respect to 10 is: %i.", number, result);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Numerical Complement Program ..\n\n");
}

// Numerical Complement function.
int numericalComplementFun(int num, int res)
{
    res = 10 - num;
    return res;
}
//* End Function ..
