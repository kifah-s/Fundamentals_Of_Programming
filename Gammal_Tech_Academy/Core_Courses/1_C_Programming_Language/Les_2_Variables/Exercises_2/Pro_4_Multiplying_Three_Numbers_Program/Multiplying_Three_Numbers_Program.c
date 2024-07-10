

//* Multiplying Three Numbers Program ..

//* Write a program that prints the result of multiplying three numbers ..

/*
! Output:
! The result of multiplying 2, 3 and 4 is: 24
*/

#include <stdio.h>

void welcomeMessageFun();
int multiplyingThreeNumbersFun(int x, int y, int z, int r);

int main()
{
    welcomeMessageFun();

    int n1 = 2, n2 = 3, n3 = 4, result = 0;
    result = multiplyingThreeNumbersFun(n1, n2, n3, result);
    printf("The result of multiplying %i, %i and %i is: %i", n1, n2, n3, result);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Multiplying Three Numbers Program ..\n\n");
}

// Multiplying Three Numbers function.
int multiplyingThreeNumbersFun(int x, int y, int z, int r)
{
    r = x * y * z;
    return r;
}
//* End Function ..
