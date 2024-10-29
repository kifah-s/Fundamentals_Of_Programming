

//* Product Positive Numbers Program (Version 1).

/*
 * Write a program that reads 8 numbers and prints the product of the positive numbers.
 */

/*
! Input:
! 1) Please enter a number: 1
! 2) Please enter a number: 2
! 3) Please enter a number: 3
! 4) Please enter a number: 4
! 5) Please enter a number: 5
! 6) Please enter a number: 6
! 7) Please enter a number: 7
! 8) Please enter a number: 8

! Output:
! Product of the positive numbers is: 40320
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumFun(int n, int i);
int calculateProductFun(int n, int p);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int num = 0, product = 1;

    // Call Functions.
    calculateProductFun(num, product);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Product Positive Numbers Program (Version 1) ..\n\n");
}

// Receive num - Function.
int receiveNumFun(int n, int i)
{
    printf("%d) Please enter a number: ", i + 1);
    scanf("%d", &n);

    return n;
}

// Calculate product - Function.
int calculateProductFun(int n, int p)
{
    for (int i = 0; i < 8; i++)
    {
        n = receiveNumFun(n, i);

        if (n > 0)
        {
            p = p * n;
        }
    }

    printf("\nProduct od the positive numbers is: %d", p);
}
//* End Function ..
