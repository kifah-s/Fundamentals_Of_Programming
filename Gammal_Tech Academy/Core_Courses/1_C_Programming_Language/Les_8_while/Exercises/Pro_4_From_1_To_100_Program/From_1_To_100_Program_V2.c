

/* >>> From 1 To 100 Program ( Version 2 ) <<< */

/* >>> A program that prints numbers from 1 to 100 (using while). <<< */

#include <stdio.h>

void welcomeMassageFun();
int from1To100Fun();

int main()
{
    welcomeMassageFun();
    from1To100Fun();
    
    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 1 To 100 Program ( Version 2 ) ..\n\n");
}

// From 1 To 100 functions;
int from1To100Fun()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }
    printf("\n\n");
}