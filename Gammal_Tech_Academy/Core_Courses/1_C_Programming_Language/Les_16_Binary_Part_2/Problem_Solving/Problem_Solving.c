//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <math.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int binary, decimal = 0, i = 0, remainder;

    // Prompt the user for input
    printf("Enter a binary number (up to 4 digits): ");
    scanf("%d", &binary);

    // Binary to decimal conversion
    while (binary != 0)
    {
        remainder = binary % 10;
        binary = binary / 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    // Display the decimal number
    printf("Decimal equivalent: %d\n", decimal);

    printf("\n\n");

    return 0;
}