

/* >>> Number 10 Program ( Version 2 ) <<< */

/* >>> A program for printing numbers from -10 to 10 (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
int number10Fun();

int main()
{
    welcomeMassageFun();
    number10Fun();

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number 10 Program ( Version 2 ) ..\n");
}

// Number 10 function;
int number10Fun()
{
    int num = -10;
    do
    {
        printf("\n%d", num);
        num++;

    } while (num <= 10);

    printf("\n\n\n");
}