

/* >>> First Line Program ( Version 1 ) <<< */

/* >>> A program that opens a file, reads the first line and prints it on the screen. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void readFromFileFun(FILE *forRead, char read[100]);

int main()
{
    welcomeMassageFun();

    FILE *forRead;
    char read[100];
    readFromFileFun(forRead, read);

    return 0;
}

// Functions ..
// Welcome massage / function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Line Program ( Version 1 ) ..\n\n");
}

// Read from file / function.
void readFromFileFun(FILE *forRead, char read[100])
{
    forRead = fopen("File_For_Read_1.txt", "r");
    fscanf(forRead, "%[^\n]", read);
    fclose(forRead);

    printf("\n%s\n\n\n", read);
}