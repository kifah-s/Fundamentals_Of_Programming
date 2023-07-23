

/* >>> Any Num From Dec To Oct Program ( Version 3 ) <<< */

/* >>> Write a program that converts from decimal to octal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int dec_to_oct();

int main()
{
    welcomeMassageFun();
    dec_to_oct();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Dec To Oct Program ( Version 3 ) ..\n\n");
}

// dec to oct function;
int dec_to_oct()
{
    int num;
    printf("Please enter a number in decimal : ");
    scanf("%d", &num);

    printf("\nDecimal number : %d\n\n", num);
    printf("Octal number : %o\n\n\n", num);

    return 0;
}