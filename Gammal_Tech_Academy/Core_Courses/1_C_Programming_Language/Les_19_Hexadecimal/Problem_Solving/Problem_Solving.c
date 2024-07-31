//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void convertToHexadecimal(int decimal)
{
    char hexadecimal[4];
    int i = 0;

    // Decimal to Hexadecimal conversion
    while (decimal != 0)
    {
        int temp = decimal % 16;

        // Convert integer to character
        if (temp < 10)
        {
            hexadecimal[i] = temp + 48;
        }
        else
        {
            hexadecimal[i] = temp + 55;
        }
        decimal /= 16;
        i++;
    }

    // Display the Hexadecimal number
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int decimal;

    // Prompt the user for input
    printf("Enter a decimal number (less than 256): ");
    scanf("%d", &decimal);

    convertToHexadecimal(decimal);

    printf("\n\n");

    return 0;
}