

//* Counts Zero Program (Version 1).

/*
 * Write a program that takes an integer as input and counts the number of zeros in it.
/*
! Input:
! Please enter a number: 1098006

! Output:
! Number of zero: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int cou);

int main()
{
    // Declare Variables.
    int myNumber = 0, counter = 0;

    // Call Functions.
    resultFun(myNumber, counter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Zero Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Count Zero - Function.
int countZeroFun(int num, int cou)
{
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 0)
        {
            cou++;
        }

        num = num / 10;
    }

    return cou;
}

// Result - Function.
void resultFun(int num, int cou)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    cou = countZeroFun(num, cou);

    printf("\nNumber of zero: %d\n\n", cou);
}
//* End Function ..
