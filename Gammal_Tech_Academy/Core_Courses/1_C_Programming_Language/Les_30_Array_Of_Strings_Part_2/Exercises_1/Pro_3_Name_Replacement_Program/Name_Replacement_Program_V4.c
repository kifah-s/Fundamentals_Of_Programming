

/* >>> Name Replacement Program ( Version 4 ) <<< */

/* >>> A program with 3 names, asks the user to enter his name and replaces the first name in the program with the user name and prints the names on the screen. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *nameFromUserFun();
int Name_Replacement(char *user_name);

int main()
{
    welcomeMassageFun();

    char *user_name = nameFromUserFun();
    Name_Replacement(user_name);
    
    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Name Replacement Program ( Version 4 ) ..\n\n");
}

// get name from user function;
char *nameFromUserFun()
{
    // Declaration array of characters;
    static char user_name[20];

    // Receive values from the user;
    printf("Please enter your name : ");
    scanf("%s", user_name);

    return user_name;
}

// Name Replacement function;
int Name_Replacement(char *user_name)
{
    // Declaration array of characters and counters;
    char name[3][20] = {"kifah", "kifah", "saloum"};
    int i;

    // Name Replacement;
    strcpy(name[0], user_name);

    printf("\n");

    // Printing array;
    printf("The names is : \n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }

    printf("\n\n");
}