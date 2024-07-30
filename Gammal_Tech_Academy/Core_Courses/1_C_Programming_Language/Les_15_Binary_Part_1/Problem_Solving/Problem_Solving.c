//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

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

    int decimal, binary[4], i = 0;

    // Prompt the user for input
    printf("Enter a decimal number (less than 16): ");
    scanf("%d", &decimal);

    // Decimal to binary conversion
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    // Display the binary number
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    printf("\n\n");

    return 0;
}