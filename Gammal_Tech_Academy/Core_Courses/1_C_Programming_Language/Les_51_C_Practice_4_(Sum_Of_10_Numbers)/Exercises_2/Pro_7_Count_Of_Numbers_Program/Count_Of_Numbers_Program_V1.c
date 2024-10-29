

//* Count Of Numbers Program (Version 1).

/*
 * Write a program that reads 7 numbers and prints the count of numbers greater than 50.
 */

/*
! Input:
! 1) Please enter a number: 1
! 2) Please enter a number: 1
! 3) Please enter a number: 1
! 4) Please enter a number: 60
! 5) Please enter a number: 2
! 6) Please enter a number: 3
! 7) Please enter a number: 5

! Output:
! Count of numbers greater than 50 is: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumFun(int n, int i);
int countOfNumbersFun(int n, int c);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 0, count = 0;

    // Call Functions.
    countOfNumbersFun(num, count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Of Numbers Program (Version 1) ..\n\n");
}

// Receive num - Function.
int receiveNumFun(int n, int i)
{
    printf("%d) Please enter a number: ", i + 1);
    scanf("%d", &n);

    return n;
}

// Calculate product - Function.
int countOfNumbersFun(int n, int c)
{
    for (int i = 0; i < 7; i++)
    {
        n = receiveNumFun(n, i);

        if (n > 50)
        {
            c++;
        }
    }

    printf("\nCount of numbers greater than 50 is: %d", c);
}
//* End Function ..
