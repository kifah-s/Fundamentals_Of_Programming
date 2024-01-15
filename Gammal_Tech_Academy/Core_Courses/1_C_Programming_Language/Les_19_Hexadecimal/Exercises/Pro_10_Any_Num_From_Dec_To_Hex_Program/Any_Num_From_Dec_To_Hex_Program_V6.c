

/* >>> Any Num From Dec To Hex Program ( Version 6 ) <<< */

/* >>> A program that converts from decimal to hexadecimal. <<< */

#include <stdio.h>
#include <stdlib.h>

void decimal_to_hexadecimal(int decimal);

int main()
{
    printf("\n\nYou welcome in Any Num From Dec To Hex Program ( Version 6 ) ..\n\n");

    
    int decimal;
    printf("Enter a decimal value: ");
    scanf("%d", &decimal);

    decimal_to_hexadecimal(decimal);

    return 0;
}

// Functions ..
//  A function to convert values from decimal to hexadecimal
void decimal_to_hexadecimal(int decimal)
{
    // Create an array to store the hexadecimal digits
    char hexadecimal[100];

    // Create a variable to store the index of the array
    int index = 0;

    // Repeat until the decimal number becomes zero
    while (decimal > 0)
    {
        // Calculate the remainder of the division by 16
        int remainder = decimal % 16;

        // Convert the remainder to a hexadecimal character and add it to the array
        if (remainder < 10)
        {
            hexadecimal[index] = remainder + '0';
        }
        else
        {
            hexadecimal[index] = remainder - 10 + 'A';
        }

        // Increase the index by one
        index++;

        // Divide the decimal number by 16
        decimal = decimal / 16;
    }

    // Print the hexadecimal value in reverse order
    printf("\nThe hexadecimal value is: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", hexadecimal[i]);
    }
    printf("\n\n\n");
}