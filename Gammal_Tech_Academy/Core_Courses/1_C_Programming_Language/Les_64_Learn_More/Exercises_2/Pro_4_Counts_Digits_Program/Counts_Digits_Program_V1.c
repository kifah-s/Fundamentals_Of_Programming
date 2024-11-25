

//* Counts Digits Program (Version 1).

/*
 * Write a program that takes a number as input and counts the number of digits in it.
/*
! Input:
! Please enter a number: 2687

! Output:
! Number of digits: 4
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
    printf("\n\nYou welcome in Counts Digits Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Counter digit - Function.
int counterDigitFun(int num, int cou)
{
    while (num != 0)
    {
        num = num / 10;
        cou++;
    }

    return cou;
}

// Result - Function.
void resultFun(int num, int cou)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    cou = counterDigitFun(num, cou);

    printf("\nNumber of digits: %d\n\n", cou);
}
//* End Function ..
