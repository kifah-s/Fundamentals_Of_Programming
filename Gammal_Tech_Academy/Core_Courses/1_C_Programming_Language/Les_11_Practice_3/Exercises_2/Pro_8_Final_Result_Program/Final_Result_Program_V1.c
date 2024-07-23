

//* Final Result Program (Version 1).

/*
 * Write a program that performs arithmetic operations on given integers and prints the results,
 * Initialize four integers num1, num2, num3, and num4 with values 5, 8, 3, and 2, respectively,
 * Calculate the product of num1, num2, and num3,
 * then add the result to num4. Finally, print both the product and the final result.
 */

/*
! Output:
! Product: 120
! Result: 122
*/

#include <stdio.h>

void welcomeMessageFun();
int productNumbersFun(int n1, int n2, int n3, int pro);
int resultNumbersFun(int pro, int n4, int res);
void printProductAndResultFun(int n1, int n2, int n3, int pro, int n4, int res);

int main()
{
    // Declare Variables.
    int num1 = 5, num2 = 8, num3 = 3, num4 = 2;
    int product = 1, result = 0;

    // Calculate and print product and result.
    printProductAndResultFun(num1, num2, num3, product, num4, result);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Final Result Program (Version 1) ..\n\n");
}

// Product Numbers - Function.
int productNumbersFun(int n1, int n2, int n3, int pro)
{
    pro = n1 * n2 * n3;

    return pro;
}

// Result Numbers - Function.
int resultNumbersFun(int pro, int n4, int res)
{
    res = pro + n4;

    return res;
}

// Print Product And Result - Function.
void printProductAndResultFun(int n1, int n2, int n3, int pro, int n4, int res)
{
    // Welcome Message.
    welcomeMessageFun();

    // Product Numbers.
    pro = productNumbersFun(n1, n2, n3, pro);

    // Sum Numbers.
    res = resultNumbersFun(pro, n4, res);

    // Print Sum And Product.
    printf("Product: %i\nResult: %i\n\n", pro, res);
}

//* End Function ..
