

/* >>> Name Backwards Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter his name and prints his name vice versa. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *getNameFun();
int name_backwards(char *name);

int main()
{
    welcomeMassageFun();

    char *name = getNameFun();
    name_backwards(name);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name Backwards Program ( Version 3 ) ..\n\n");
}

// get name function;
char *getNameFun()
{
    // Declaration array of characters;
    static char name[25];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);
    printf("\n");

    return name;
}

// name backwards function;
int name_backwards(char *name)
{
    // Name reversed;
    for (int i = strlen(name); i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    printf("\n\n\n");
}