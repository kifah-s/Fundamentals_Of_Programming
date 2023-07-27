

/* >>> 5 Names Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter 5 names and prints each name along with the number of its letters (In two different ways). <<< */

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
    printf("\n\nYou welcome in 5 Names Program ( Version 3 ) ..\n\n");
}

// names function;
int names()
{
    // Declaration variable and Receive values from the user;
    int names_count;
    printf("Please enter names count that you want to enter : ");
    scanf("%d", &names_count);

    // Declaration array, counters and variable;
    char names[names_count][25];
    int i, j, num = 0;

    // Receive values from the user;
    printf("Please enter %d names : \n", names_count);
    for (i = 0; i < names_count; i++)
    {
        scanf("%s", names[i]);
    }

    printf("\n---------------------------------\n\n");

    // Printing names;
    for (i = 0; i < names_count; i++)
    {
        for (j = 0; j < names[i][j]; j++)
        {
            num++;
        }
        printf("Name : ' %s '\n", names[i]);
        printf("Character count : %d\n\n", num);
        num = 0;
    }

    printf("\n\n");
}