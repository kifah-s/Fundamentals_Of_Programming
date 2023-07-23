

/* >>> Any Num From Dec To Oct Program ( Version 5 ) <<< */

/* >>> Write a program that converts from decimal to octal. <<< */

#include <stdio.h>
#include <math.h>

void welcomeMassageFun();
int decimal_to_octal(int n);

int main()
{
    welcomeMassageFun();
    
    int num;
    printf("Please enter a decimal number : ");
    scanf("%d", &num);

    printf("\n%d in decimal = %d in octal\n\n\n", num, decimal_to_octal(num));

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Dec To Oct Program ( Version 5 ) ..\n\n");
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