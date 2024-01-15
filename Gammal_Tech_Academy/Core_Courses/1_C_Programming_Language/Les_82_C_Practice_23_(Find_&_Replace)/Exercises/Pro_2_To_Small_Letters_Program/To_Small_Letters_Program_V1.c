

/* >>> To Small Letters Program ( Version 1 ) <<< */

/* >>>  A program that contains a file with a text. The program is required to convert all the letters in the file into small letters.<<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void toSmallLettersFun(FILE *file, FILE *file_2, char letter);

int main()
{
    welcomeMassageFun();

    char letter;
    FILE *file, *file_2;
    toSmallLettersFun(file, file_2, letter);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in To Small Letters Program ( Version 1 ) ..\n\n");
}

// To Small Letters / Function.
void toSmallLettersFun(FILE *file, FILE *file_2, char letter)
{
    file = fopen("file.txt", "r");
    file_2 = fopen("file_2.txt", "w");

    while (fscanf(file, "%c", &letter) != EOF)
    {
        if (letter >= 'A' && letter <= 'Z')
        {
            letter += 32;
            fprintf(file_2, "%c", letter);
        }
        else
        {
            fprintf(file_2, "%c", letter);
        }
    }
    fclose(file);
    fclose(file_2);
}
