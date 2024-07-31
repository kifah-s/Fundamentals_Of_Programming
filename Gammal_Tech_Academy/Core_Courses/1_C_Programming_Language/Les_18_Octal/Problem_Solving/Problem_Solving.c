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

    int decimal, octal[6], i = 0;

    // Prompt the user for input
    printf("Enter a decimal number (less than 64): ");
    scanf("%d", &decimal);

    // Decimal to Octal conversion
    while (decimal != 0)
    {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    // Display the Octal number
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
    printf("\n\n");

    return 0;
}