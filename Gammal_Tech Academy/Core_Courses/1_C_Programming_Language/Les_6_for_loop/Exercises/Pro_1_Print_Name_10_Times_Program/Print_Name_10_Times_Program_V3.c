

/* >>> Print Name 10 Times Program ( Version 3 ) <<< */

/* >>> A program that prints person's name 10 times. <<< */

#include <stdio.h>

void welcomeMassageFun();
int printNameFun();

int main()
{
    welcomeMassageFun();
    printNameFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Name 10 Times Program ( Version 3 ) ..\n\n");
}

// Print Name Function;
int printNameFun()
{
    int i;
    char name[30];

    printf("\nPlease Enter your name : ");
    scanf("%s", name);

    for (i = 0; i < 10; i++)
    {
        printf("\n%s", name);
    }
    printf("\n\n\n");
}