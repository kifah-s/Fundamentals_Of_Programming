

/* >>> Name 10 Times Program ( Version 4 ) <<< */

/* >>> A program that prints a person's name 10 times (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
char *getNameFun();
int name10TimesFun(char *name);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    name10TimesFun(name);

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name 10 Times Program ( Version 4 ) ..\n\n");
}

// get name function;
char *getNameFun()
{
    static char name[30];
    printf("Please enter your name : ");
    scanf("%s", &name);
    return name;
}

// Name 10 Times function;
int name10TimesFun(char *name)
{
    int i = 0;
    do
    {
        printf("\n%s", name);

        i++;

    } while (i < 10);

    printf("\n\n\n");
}