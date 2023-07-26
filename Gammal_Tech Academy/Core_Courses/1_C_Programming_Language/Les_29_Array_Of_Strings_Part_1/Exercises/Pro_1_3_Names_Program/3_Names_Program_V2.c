

/* >>> 3 Names Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter 3 different names and print them. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int names();

int main()
{
    welcomeMassageFun();
    names();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 3 Names Program ( Version 2 ) ..\n\n");
}

// names function;
int names()
{
    // Declaration array of characters;
    char name[3][15];

    // Receive values from the user;
    printf("Please enter 3 names : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name %d : ", i + 1);
        scanf("%s", name[i]);
    }
    printf("\n");

    // Printing names;
    printf("The names is : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d : ", i + 1);
        printf("%s", name[i]);
        printf("\n");
    }

    printf("\n\n");
}