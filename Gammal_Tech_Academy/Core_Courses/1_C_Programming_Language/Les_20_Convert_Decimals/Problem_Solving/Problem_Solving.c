//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void convertToBinary(int decimal)
{
    int binary[6], i = 0;
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void convertToOctal(int decimal)
{
    int octal[6], i = 0;
    while (decimal > 0)
    {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void convertToHexadecimal(int decimal)
{
    char hexadecimal[4];
    int i = 0;
    while (decimal != 0)
    {
        int temp = decimal % 16;
        hexadecimal[i] = (temp < 10) ? (temp + 48) : (temp + 55);
        decimal /= 16;
        i++;
    }
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
    printf("Enter a decimal number (less than 64): ");
    scanf("%d", &decimal);

    convertToBinary(decimal);
    convertToOctal(decimal);
    convertToHexadecimal(decimal);

    printf("\n\n");

    return 0;
}