

/* >>> Name And Age Program ( Version 1 )<<< */

/* >>> A program that asks the user for his name, age, name printing and age side such as "Amr 33 years old". <<< */

#include <stdio.h>

int name_and_age();

int main()
{
    printf("\n\nYou welcome in Name And Age Program ( Version 1 ) ..\n\n");

    name_and_age();

    return 0;
}

// Functions ..
// name and age function;
int name_and_age()
{
    // Declaration array of characters and variable;
    char name[20];
    int age;

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    printf("Please enter your age : ");
    scanf("%d", &age);

    // Printing name and age;
    printf("\n%s %d years old", name, age);

    printf("\n\n\n");
}