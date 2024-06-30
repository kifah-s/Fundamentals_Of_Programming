

/* >>> Any Num From Hex To Dec Program ( Version 7 ) <<< */

/* >>> A program that converts from hexadecimal to decimal. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
int hex_to_dec(char *hex);
void get_and_print_values();

int main()
{
    welcomeMassageFun();
    get_and_print_values();

    return 0;
}

// functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Hex To Dec Program ( Version 7 ) ..\n\n");
}

// A function to convert a string of hexadecimal characters to a decimal number
int hex_to_dec(char *hex)
{
    // the length of the string
    int len = strlen(hex);

    // the base of the exponent
    int base = 1;

    // the decimal value
    int dec = 0;

    // iterate over each character from right to left
    for (int i = len - 1; i >= 0; i--)
    {
        // if the character is between 0 and 9
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            // multiply by the base and add to the decimal value
            dec += (hex[i] - '0') * base;

            // increase the base of the exponent by 16
            base *= 16;
        }
        // if the character is between A and F
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            // multiply by the base and add to the decimal value
            dec += (hex[i] - 'A' + 10) * base;

            // increase the base of the exponent by 16
            base *= 16;
        }
    }

    // return the decimal value
    return dec;
}

// A function to take values from the user and print them in decimal system
void get_and_print_values()
{
    // an array to store hexadecimal values
    char hex[20];

    // a variable to store decimal values
    int dec;

    printf("Enter hexadecimal values separated by commas, or press q to exit: ");
    while (1)
    {
        // read hexadecimal values from the user
        scanf("%s", hex);

        if (strcmp(hex, "q") == 0)
        {
            // if it is q, exit the loop
            break;
        }
        // convert hexadecimal values to decimal using hex_to_dec function
        dec = hex_to_dec(hex);

        // print the decimal value
        printf("\nThe decimal value of %s is %d\n\n", hex, dec);
    }
}
