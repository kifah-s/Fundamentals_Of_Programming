

//* Sum Of Three Numbers Program ..

//* Write a program that involves four numbers. Calculate the sum of the first three numbers and then subtract the fourth number from the sum. Print both the sum of the first three numbers and the result after subtracting the fourth number ..

/*
! Output:
! The sum of numbers 5, 8, and 3 is: 16
! Subtracting number 2 from the sum numbers is: 14
*/

#include <stdio.h>

void welcomeMessageFun();
int sumOfThreeNumbersFun(int num1, int num2, int num3, int sum);
int resultSubtractingFun(int sum, int sub, int result);

int main()
{
    welcomeMessageFun();

    int n1 = 5, n2 = 8, n3 = 3, sum = 0;
    sum = sumOfThreeNumbersFun(n1, n2, n3, sum);
    printf("The sum of numbers %i, %i, and %i is: %i\n\n", n1, n2, n3, sum);

    int sub = 2, result = 0;
    result = resultSubtractingFun(sum, sub, result);
    printf("Subtracting number %i from the sum numbers is: %i\n\n", sub, result);

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Three Numbers Program ..\n\n");
}

// Sum Of Three Numbers function.
int sumOfThreeNumbersFun(int num1, int num2, int num3, int sum)
{
    sum = num1 + num2 + num3;
    return sum;
}

// result subtracting function.
int resultSubtractingFun(int sum, int sub, int result)
{
    result = sum - sub;
    return result;
}
//* End Function ..
