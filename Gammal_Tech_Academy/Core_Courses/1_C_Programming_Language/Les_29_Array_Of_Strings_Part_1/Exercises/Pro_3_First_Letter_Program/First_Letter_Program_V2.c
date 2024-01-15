

/* >>> First Letter Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter 3 different names then it prints the first letter of each word. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int first_letter();

int main()
{
    welcomeMassageFun();
    first_letter();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter Program ( Version 2 ) ..\n\n");
}

// first letter function;
int first_letter()
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
    printf("The first letters from names is : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d : ", i + 1);
        printf("%c", name[i][0]);
        printf("\n");
    }

    printf("\n\n");
}