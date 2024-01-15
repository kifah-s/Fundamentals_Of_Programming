

/* >>> User File 1 Program ( Version 1 ) <<< */

/* >>> A program that creates a new file and asks the user to enter the name and number of the phone and record it inside the file and everything that works run displays the existing in the file on the screen and is available to the user to enter new names and telephone numbers and be recorded inside the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int userFileFun(FILE *userFile, char name[50], char number[25], char x);

int main()
{
    welcomeMassageFun();

    FILE *userFile;
    char name[50], number[25], x;
    userFileFun(userFile, name, number, x);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in User File 1 Program ( Version 1 ) ..\n\n");
}

// user file / Function.
int userFileFun(FILE *userFile, char name[50], char number[25], char x)
{
    printf("Data in file ...\n");
    userFile = fopen("user_file_1.txt", "a+");

    while (fscanf(userFile, "%c", &x) != EOF)
    {
        printf("%c", x);
    }

    printf("\nplease enter yor name: ");
    scanf(" %49[^\n]", name);

    printf("please enter your number: ");
    scanf(" %24[^\n]", number);

    fprintf(userFile, "name: %s - number: %s\n", name, number);

    fclose(userFile);
}