

//* Sum And Product Program (Version 1).

/*
 * Write a program that prompts the user to enter a number,
 * Once the number is entered, the program should calculate and display
 * the sum and product of all integers from 1 to the entered number.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! Sum: 15
! Product: 120
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
int sumNumbersFun(int num, int sum);
int productNumbersFun(int num, int pro);
void printSumAndProductFun(int num, int sum, int pro);

int main()
{

    // Declare Variables.
    int number = 0, sum = 0, product = 1;

    // Calculate Sum and Product Numbers.
    printSumAndProductFun(number, sum, product);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum And Product Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Sum Numbers - Function.
int sumNumbersFun(int num, int sum)
{
    for (int i = 1; i <= num; i++)
    {
        // sum = sum + i;
        sum += i;
    }

    return sum;
}

// Product Numbers - Function.
int productNumbersFun(int num, int pro)
{
    for (int i = 1; i <= num; i++)
    {
        // pro = pro * i;
        pro *= i;
    }

    return pro;
}

// Print Sum And Product - Function.
void printSumAndProductFun(int num, int sum, int pro)
{
    // Welcome Message.
    welcomeMessageFun();

    // Getting Number.
    num = gettingNumberFun(num);

    // Sum Numbers.
    sum = sumNumbersFun(num, sum);

    // Product Numbers.
    pro = productNumbersFun(num, pro);

    // Print Sum And Product.
    printf("\nSum: %i\nProduct: %i\n\n", sum, pro);
}

//* End Function ..
