

/* >>> 5 Names And Numbers Program ( Version 5 ) <<< */

/* >>> A program that creates a new file and asks the user to enter 5 names and numbers of their telephones and records the data inside the file and eventually prints the file on the screen. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Structs ..
struct contacts
{
    char name[25];
    char number[25];
};

void welcomeMassageFun();
void getNamesAndNumbersFun(struct contacts contact[5]);
void FileForWriteFun(FILE *fileForWrite, struct contacts contact[5]);
void printDataInFileOnTerminalFun(FILE *fileForWrite, char x);

int main()
{
    welcomeMassageFun();

    FILE *fileForWrite;
    struct contacts contact[5];
    char x;

    printDataInFileOnTerminalFun(fileForWrite, x);

    getNamesAndNumbersFun(contact);

    FileForWriteFun(fileForWrite, contact);

    printDataInFileOnTerminalFun(fileForWrite, x);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 5 Names And Numbers Program ( Version 5 ) ..\n\n");
}

// Get names and numbers / Function.
void getNamesAndNumbersFun(struct contacts contact[5])
{
    printf("Please enter 5 contacts:\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("contact %d:\n", i + 1);
        printf("Please enter yor name: ");
        scanf("%s", contact[i].name);
        printf("Please enter yor number: ");
        scanf("%s", contact[i].number);

        printf("\n");
    }
}

// Create file 1 for write contacts in file / Function.
void FileForWriteFun(FILE *fileForWrite, struct contacts contact[5])
{
    fileForWrite = fopen("file_1_for_write.txt", "a+");

    fprintf(fileForWrite, "\n--------------------------------------\n");
    fprintf(fileForWrite, "This data was added from the program V5 \n");
    fprintf(fileForWrite, "--------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        fprintf(fileForWrite, "%s : %s\n", contact[i].name, contact[i].number);
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