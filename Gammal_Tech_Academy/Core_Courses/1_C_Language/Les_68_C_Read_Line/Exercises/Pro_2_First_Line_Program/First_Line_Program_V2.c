

/* >>> First Line Program ( Version 2 ) <<< */

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
    char read[100], write[100];
    readFromFileFun(forRead, read);

    return 0;
}

// Functions ..
// Welcome massage / function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Line Program ( Version 2 ) ..");
}

// Read from file / function.
void readFromFileFun(FILE *forRead, char read[100])
{
    forRead = fopen("File_For_Read_2.txt", "r");
    // fscanf(forRead, "%[^\n]", read);
    
    while (fscanf(forRead, "%c", &read) != EOF)
    {
        printf("%c", read);
    }
    printf("\n\n");

    fclose(forRead);
}