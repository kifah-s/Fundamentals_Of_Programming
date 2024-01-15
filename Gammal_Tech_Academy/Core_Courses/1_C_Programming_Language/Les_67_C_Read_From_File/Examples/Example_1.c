

/* >>> Example 1 <<< */


#include <stdio.h>

int main()
{
    char firstWord[25];

    FILE *filePointer = fopen("First_Word_V1.txt", "r"); // Open the file for read.

    fscanf(filePointer, "%s", firstWord); // Read first word.

    fclose(filePointer);

    printf("\n%s\n\n", firstWord);

    return 0;
}