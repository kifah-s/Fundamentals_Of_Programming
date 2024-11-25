

//* Counts Even and Odd Program (Version 1).

/*
 * Write a program that takes an integer as input and counts the number of zeros in it.
/*
! Input:
! Please enter a number: 159642

! Output:
! Even digits count: 3
! Odd digits count: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int couE, int couO);

int main()
{
    // Declare Variables.
    int myNumber = 0, evenCounter = 0, oddCounter = 0;

    // Call Functions.
    resultFun(myNumber, evenCounter, oddCounter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Even and Odd Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Count Even - Function.
int countEvenFun(int num, int couE)
{
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            couE++;
        }

        num = num / 10;
    }

    return couE;
}

// Count Odd - Function.
int countOddFun(int num, int couO)
{
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            couO++;
        }

        num = num / 10;
    }

    return couO;
}

// Result - Function.
void resultFun(int num, int couE, int couO)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    couE = countEvenFun(num, couE);
    couO = countOddFun(num, couO);

    printf("\nEven digits count: %d", couE);
    printf("\nOdd digits count: %d\n\n", couO);
}
//* End Function ..
