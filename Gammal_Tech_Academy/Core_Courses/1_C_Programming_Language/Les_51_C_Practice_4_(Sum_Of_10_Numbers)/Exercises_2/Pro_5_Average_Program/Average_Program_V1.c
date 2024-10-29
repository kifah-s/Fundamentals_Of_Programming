

//* Average Program (Version 1).

/*
 * Write a program that reads 5 numbers and prints their average.
 */

/*
! Input:
! 1) Please enter a number: 1
! 2) Please enter a number: 2
! 3) Please enter a number: 3
! 4) Please enter a number: 4
! 5) Please enter a number: 5

! Output:
! Average: 3.00
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumFun(int n, int i);
int calculateAverageFun(int n, int s, float a);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 0, sum = 0;
    float average = 0;

    // Call Functions.
    calculateAverageFun(num, sum, average);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Average Program (Version 1) ..\n\n");
}

// Receive num - Function.
int receiveNumFun(int n, int i)
{
    printf("%d) Please enter a number: ", i + 1);
    scanf("%d", &n);

    return n;
}

// Calculate average - Function.
int calculateAverageFun(int n, int s, float a)
{
    for (int i = 0; i < 5; i++)
    {
        n = receiveNumFun(n, i);

        s = s + n;
    }

    a = s / 5;

    printf("\nAverage: %0.2f", a);
}
//* End Function ..
