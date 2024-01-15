

/* >>> 5 Names And Numbers Program ( Version 2 ) <<< */

/* >>> A program that creates a new file and asks the user to enter 5 names and numbers of their telephones and records the data inside the file and eventually prints the file on the screen. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void FileForWriteFun(FILE *fileForWrite, char name[25], char number[25]);
void printDataInFileOnTerminalFun(FILE *fileForWrite, char x);

int main()
{
    welcomeMassageFun();

    FILE *fileForWrite;
    char name[25], number[25], x;

    printDataInFileOnTerminalFun(fileForWrite, x);

    FileForWriteFun(fileForWrite, name, number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 5 Names And Numbers Program ( Version 2 ) ..\n\n");
}

// Create file 1 for write contacts in file / Function.
void FileForWriteFun(FILE *fileForWrite, char name[25], char number[25])
{
    fileForWrite = fopen("file_1_for_write.txt", "a+");

    fprintf(fileForWrite, "\n--------------------------------------\n");
    fprintf(fileForWrite, "This data was added from the program V2 \n");
    fprintf(fileForWrite, "--------------------------------------\n");

    printf("Please enter 5 contacts:\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("contact %d:\n", i + 1);
        printf("Please enter yor name: ");
        scanf("%s", name);
        printf("Please enter yor number: ");
        scanf("%s", number);

        fprintf(fileForWrite, "%s : %s\n", name, number);
        printf("\n");
    }

    fclose(fileForWrite);
}

// Print the data in the file on terminal / Function.
void printDataInFileOnTerminalFun(FILE *fileForWrite, char x)
{
    printf("contact in file is: \n");
    fileForWrite = fopen("file_1_for_write.txt", "a+");
    while (fscanf(fileForWrite, "%c", &x) != EOF)
    {
        printf("%c", x);
    }
    fclose(fileForWrite);
    printf("\n\n");
}