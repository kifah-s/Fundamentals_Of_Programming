

//* Multiplying And Sum Program.

//* Write a program with two variables, multiply them, and print the result. Then add them and print the sum.

/*
! Output:
! The multiply of 4 and 7 is: 28
! The sum of 4 and 7 is: 11
*/

#include <stdio.h>

void welcomeMessageFun();
int multiplyNumbersFun(int x, int y, int r);
int sumNumbersFun(int x, int y, int r);

int main()
{
    welcomeMessageFun();

    int n1 = 4, n2 = 7, result = 0;

    result = multiplyNumbersFun(n1, n2, result);
    printf("The multiply of %i and %i is: %i\n\n", n1, n2, result);

    result = sumNumbersFun(n1, n2, result);
    printf("The sum of %i and %i is: %i", n1, n2, result);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Multiplying And Sum Program ..\n\n");
}

// Multiply Numbers function.
int multiplyNumbersFun(int x, int y, int r)
{
    r = x * y;
    return r;
}

// Sum Numbers function.
int sumNumbersFun(int x, int y, int r)
{
    r = x + y;
    return r;
}
//* End Function ..
