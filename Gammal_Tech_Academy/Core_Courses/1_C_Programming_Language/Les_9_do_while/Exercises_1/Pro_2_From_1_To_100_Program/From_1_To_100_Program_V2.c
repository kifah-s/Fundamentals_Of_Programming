

/* >>> From 1 To 100 Program ( Version 2 ) <<< */

/* >>> A program that prints numbers from 1 to 100 (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
int from1To100Fun();

int main()
{
    welcomeMassageFun();
    from1To100Fun();
    
    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 1 To 100 Program ( Version 2 ) ..\n\n");
}

//  From 1 To 100 function;
int from1To100Fun()
{
    int i = 1;
    do
    {
        printf("\n%d", i);
        i++;

    } while (i <= 100);

    printf("\n\n\n");
}