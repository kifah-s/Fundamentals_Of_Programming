

/* >>> Any Num From Dec To Bin Program ( Version 4 ) <<< */

/* >>> Convert any number from decimal to Binary. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
void decimal_to_binary(int n);

int main()
{
    welcomeMassageFun();

    int n = getNumberFun();
    decimal_to_binary(n);

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Dec To Bin Program ( Version 4 ) ..\n\n");
}

// Get Number Function;
int getNumberFun()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("\nThe decimal number is : %d", n);

    return n;
}

// decimal to binary function;
void decimal_to_binary(int n)
{

    int binary[32], i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("\n\nThe binary number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n\n\n");
}