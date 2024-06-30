

/* >>> Replace Word Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter word. The program will replace the first word in the file with the user word. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
char *getWordFun(char word[]);
void replaceWordFun(FILE *file, FILE *file_2, char word[25], char string[100]);

int main()
{
    welcomeMassageFun();

    char word[50], string[100];
    getWordFun(word);
    // printf("\n%s\n\n", word); // Check.

    FILE *file, *file_2;
    replaceWordFun(file, file_2, word, string);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Replace Word Program ( Version 1 ) ..\n\n");
}

// Get word / Function.
char *getWordFun(char word[])
{
    printf("Please enter the word that you need replace for the word two in file: ");
    scanf("%s", word);

    return word;
}

// Replace word / Function.
void replaceWordFun(FILE *file, FILE *file_2, char word[25], char string[100])
{
    file = fopen("file.txt", "r");
    file_2 = fopen("file_2.txt", "w");

    while (fscanf(file, "%s ", string) != EOF)
    {
        if (strcmp(string, "ssaloumm") == 0)
        {
            fprintf(file_2, "%s ", word);
        }
        else
        {
            fprintf(file_2, "%s ", string);
        }
    }
    fclose(file);
    fclose(file_2);

    /* file_2 = fopen("file_2.txt", "r");
    file = fopen("file.txt", "w");
    while (fscanf(file_2, "%s ", string) != EOF)
    {
        fprintf(file, "%s ", string);
    }
    fclose(file);
    fclose(file_2);
    remove("file_2.txt"); */
}
