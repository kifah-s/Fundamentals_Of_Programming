

/* >>> Phone Number Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a phone number and the program prints the first 3 digits of the number and calls them a code and the rest of the digits calls them phone number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void getPhoneNumberFun(char code[4], char phoneNumber[25]);

int main()
{
    welcomeMassageFun();

    char code[4], phoneNumber[25];
    getPhoneNumberFun(code, phoneNumber);
    printf("\nCode: %s\n", code);
    printf("Phone Number: %s\n\n", phoneNumber);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Phone Number Program ( Version 2 ) ..\n\n");
}

// Get Phone Number / Function.
void getPhoneNumberFun(char code[4], char phoneNumber[25])
{
    printf("Please enter your Full phone number: ");
    scanf("%3s", code);
    scanf("%[^\n]",phoneNumber);
    // %[^3s] : Read first 3 number .
    // %[^/] : Read read number .
}