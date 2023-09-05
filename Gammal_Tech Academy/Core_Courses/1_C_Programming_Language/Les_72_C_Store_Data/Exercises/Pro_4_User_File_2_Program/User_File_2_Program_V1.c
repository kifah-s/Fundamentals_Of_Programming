

/* >>> User File 2 Program ( Version 1 ) <<< */

/* >>> A new program that creates a new file and asks the user to enter his name, college or school and record this data within the file and everything that works run displays the presence in the file on the screen and is available to the user to enter new names and data and register within the file. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int userFileFun(FILE *userFile, char name[50], char schoolName[25], char x);

int main()
{
    welcomeMassageFun();

    FILE *userFile;
    char name[50], schoolName[25], x;
    userFileFun(userFile, name, schoolName, x);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in User File 2 Program ( Version 1 ) ..\n\n");
}

// user file / Function.
int userFileFun(FILE *userFile, char name[50], char schoolName[25], char x)
{
    printf("Data in file ...\n");
    userFile = fopen("user_file_2.txt", "a+");

    while (fscanf(userFile, "%c", &x) != EOF)
    {
        printf("%c", x);
    }

    printf("\nplease enter yor name: ");
    scanf(" %49[^\n]", name);

    printf("please enter your Your school name: ");
    scanf(" %24[^\n]", schoolName);

    fprintf(userFile, "name: %s - school name: %s\n", name, schoolName);

    fclose(userFile);
}