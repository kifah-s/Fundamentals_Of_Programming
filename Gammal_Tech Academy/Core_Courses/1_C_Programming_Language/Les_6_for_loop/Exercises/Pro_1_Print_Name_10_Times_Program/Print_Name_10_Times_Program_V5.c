

/* >>> Print Name 10 Times Program ( Version 5 ) <<< */

/* >>> A program that prints person's name 10 times. <<< */

#include <stdio.h>

void welcomeMassageFun();
char *gettingNameFun();
char printNameFun(char name[]);

int main()
{
    welcomeMassageFun();
    char *name[] = {gettingNameFun()};
    printNameFun(*name);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Print Name 10 Times Program ( Version 5 ) ..\n\n");
}

// Getting name function;
char *gettingNameFun()
{
    static char name[30];
    printf("\nPlease Enter your name : ");
    scanf("%s", name);
    return name;
}

// Print Name Function;
char printNameFun(char name[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("\n%s", name);
    }
    printf("\n\n\n");
}