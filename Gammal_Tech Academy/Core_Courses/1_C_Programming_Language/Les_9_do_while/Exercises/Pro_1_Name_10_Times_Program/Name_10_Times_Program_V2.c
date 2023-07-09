

/* >>> Name 10 Times Program ( Version 2 ) <<< */

/* >>> A program that prints a person's name 10 times (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
int name10TimesFun();

int main()
{
    welcomeMassageFun();
    name10TimesFun();
    
    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name 10 Times Program ( Version 2 ) ..\n\n");
}

// Name 10 Times function;
int name10TimesFun()
{
    char name[30];
    int i = 0;

    printf("Please enter your name : ");
    scanf("%s", &name);

    do
    {
        printf("\n%s", name);

        i++;

    } while (i < 10);

    printf("\n\n\n");
}