

/* >>> Num 200 From Dec To Hex, Oct And Bin Program ( Version 5 ) <<< */

/* >>> Convert Number (200) from decimal to hexadecimal, octal and binary. <<< */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void welcomeMassageFun();
int decimal_to_hexadecimal(int decimal);
int decimal_to_octal(int decimal);
int decimal_to_binary(int decimal);

int main()
{
    welcomeMassageFun();
    
    int decimal = 200;
    printf("The decimal number is : %d\n\n", decimal);

    decimal_to_hexadecimal(decimal);
    decimal_to_octal(decimal);
    decimal_to_binary(decimal);

    printf("\n\n\n");

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 200 From Dec To Hex, Oct And Bin Program ( Version 5 ) ..\n\n");
}

// Function for convert decimal to hexadecimal ..
int decimal_to_hexadecimal(int decimal)
{
    // Initialize an array to store the hexadecimal equivalent
    char hexadecimal[32];

    // Initialize a counter
    int i = 0;

    // Iterate until the decimal number becomes 0
    while (decimal != 0)
    {
        // Get the remainder when the decimal number is divided by 16
        int remainder = decimal % 16;

        // Convert the remainder to a hexadecimal digit
        if (remainder < 10)
        {
            hexadecimal[i] = remainder + '0';
        }
        else
        {
            hexadecimal[i] = remainder - 10 + 'A';
        }
        // Divide the decimal number by 16
        decimal /= 16;

        // Increment the counter
        i++;
    }

    // Print the hexadecimal equivalent in reverse order
    printf("The hexadecimal number is : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexadecimal[j]);
    }

    printf("\n\n");
}

// Function for convert decimal to octal ..
int decimal_to_octal(int decimal)
{
    // Initialize an array to store the octal equivalent
    int octal[32];

    // Initialize a counter
    int i = 0;

    // Iterate until the decimal number becomes 0
    while (decimal != 0)
    {
        // Get the remainder when the decimal number is divided by 8
        octal[i] = decimal % 8;

        // Divide the decimal number by 8
        decimal /= 8;

        // Increment the counter
        i++;
    }

    // Print the octal equivalent in reverse order
    printf("The octal number is : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n\n");
}

// Function for convert decimal to binary ..
int decimal_to_binary(int decimal)
{
    // Initialize an array to store the binary equivalent
    int binary[32];

    // Initialize a counter
    int i = 0;

    // Iterate until the decimal number becomes 0
    while (decimal != 0)
    {
        // Get the remainder when the decimal number is divided by 2
        binary[i] = decimal % 2;

        // Divide the decimal number by 2
        decimal /= 2;

        // Increment the counter
        i++;
    }

    // Print the binary equivalent in reverse order
    printf("The octal number is : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
}
