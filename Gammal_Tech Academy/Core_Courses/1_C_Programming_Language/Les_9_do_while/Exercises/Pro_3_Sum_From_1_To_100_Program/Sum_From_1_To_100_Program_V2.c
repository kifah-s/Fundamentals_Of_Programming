

/* >>> Sum From 1 To 100 Program ( Version 2 ) <<< */

/* >>> A program that prints numbers from 1 to 100 and collects them all and prints the total (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
int sumFrom1To100Fun();

int main()
{
    welcomeMassageFun();
    sumFrom1To100Fun();
    
    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum From 1 To 100 Program ( Version 2 ) ..\n\n");
}

// Sum From 1 To 100 function;
int sumFrom1To100Fun()
{
    int i = 1, sum = 0;
    do
    {
        printf("\n%d", i);
        sum = sum + i;
        i++;

    } while (i <= 100);

    printf("\n\nSum numbers from 1 to 100 is : %d", sum);
    printf("\n\n\n");
}