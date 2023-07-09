

/* >>> Number 5 Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter numbers without stopping until the entry of number 5, the program stops working and prints "Is Five" (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
int number5Fun();

int main()
{
    welcomeMassageFun();
    number5Fun();
    
    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number 5 Program ( Version 2 ) ..\n\n");
}

// Number 5 function;
int number5Fun()
{
    int num;
    do
    {
        printf("Please enter number : ");
        scanf("%d", &num);

    } while (num != 5);

    printf("\n\"Is Five\"");

    printf("\n\n\n");
}