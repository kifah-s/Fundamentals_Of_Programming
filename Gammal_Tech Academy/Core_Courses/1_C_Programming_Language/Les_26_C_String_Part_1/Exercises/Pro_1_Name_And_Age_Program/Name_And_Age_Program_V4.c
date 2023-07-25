

/* >>> Name And Age Program ( Version 4 ) <<< */

/* >>> A program that asks the user for his name, age, name printing and age side such as "Amr 33 years old". <<< */

#include <stdio.h>

void welcomeMassageFun();
char *getUserNameFun();
int getUserAgeFun(char *name);
int name_and_age(char *name, int age);

int main()
{
    welcomeMassageFun();

    char *name = getUserNameFun();
    int age = getUserAgeFun(name);
    name_and_age(name, age);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name And Age Program ( Version 4 ) ..\n\n");
}

// get user name function;
char *getUserNameFun()
{
    // Declaration array of characters;
    static char name[20];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", name);

    return name;
}

// get user age function;
int getUserAgeFun(char *name)
{
    // Declaration variable;
    int age;

    // Receive values from the user;
    printf("Please enter your age %s : ", name);
    scanf("%d", &age);

    return age;
}

// name and age function;
int name_and_age(char *name, int age)
{
    // Printing name and age;
    printf("\n%s %d years old", name, age);

    printf("\n\n\n");
}