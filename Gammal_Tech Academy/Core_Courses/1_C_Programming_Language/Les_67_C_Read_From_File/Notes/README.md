# Notes ..

1. EOF : End Of File.

2. Read first word from file:

```c

// Read from file / Function.
void readFromFileFun(FILE *filePointer, char firstWord[25])
{
    filePointer = fopen("First_Word_V2.txt", "r"); // Open the file for read.
    fscanf(filePointer, "%s", firstWord);          // Read first word from file.
    fclose(filePointer);                           // Close the file after reading is finished
}

```

3. Read All word from file:

```c

// Read from file / Function.
void readFromFileFun(FILE *filePointer, char allFile)
{
    filePointer = fopen("All_File_V1.txt", "r");                                // Open the file for read.
    while (fscanf(filePointer, "%c", &allFile) != EOF /* EOF : End Of File. */) // Read All File,
    {
        printf("%c", allFile);
    }
    printf("\n\n");

    fclose(filePointer); // Close the file after reading is finished
}

```
