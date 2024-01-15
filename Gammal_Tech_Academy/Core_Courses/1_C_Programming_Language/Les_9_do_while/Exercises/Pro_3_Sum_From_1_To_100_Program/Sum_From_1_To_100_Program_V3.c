

/* >>> Sum From 1 To 100 Program ( Version 3 ) <<< */

/* >>> A program that prints numbers from 1 to 100 and collects them all and prints the total (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
int sumFrom1To100Fun();
char printSum1To100Fun(int sum);

int main()
{
    welcomeMassageFun();

    int sum = sumFrom1To100Fun();
    printSum1To100Fun(sum);

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum From 1 To 100 Program ( Version 3 ) ..\n\n");
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

    return sum;
}

// Print sum 1 to 100 function;
char printSum1To100Fun(int sum)
{
    printf("\n\nSum numbers from 1 to 100 is : %d", sum);
    printf("\n\n\n");
}