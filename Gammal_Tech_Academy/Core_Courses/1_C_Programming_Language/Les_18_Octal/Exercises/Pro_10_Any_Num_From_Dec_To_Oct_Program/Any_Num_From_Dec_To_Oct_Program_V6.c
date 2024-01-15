

/* >>> Any Num From Dec To Oct Program ( Version 6 ) <<< */

/* >>> Write a program that converts from decimal to octal. <<< */

#include <stdio.h>
#include <math.h>

void welcomeMassageFun();
int decimalNumberFun();
int decimal_to_octal(int n);

int main()
{
    welcomeMassageFun();
    int num = decimalNumberFun();
    printf("\n%d in decimal = %d in octal\n\n\n", num, decimal_to_octal(num));

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Dec To Oct Program ( Version 6 ) ..\n\n");
}

// get decimal number function;
int decimalNumberFun()
{
    int num;
    printf("Please enter a decimal number : ");
    scanf("%d", &num);

    return num;
}

// decimal to octal function;
int decimal_to_octal(int n)
{
    int octal = 0, power = 0;

    while (n > 0)
    {
        int remainder = n % 8;
        octal = octal + remainder * pow(10, power);
        power++;
        n = n / 8;
    }

    return octal;
}