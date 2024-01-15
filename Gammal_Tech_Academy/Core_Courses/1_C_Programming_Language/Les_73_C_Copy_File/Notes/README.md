# Notes ..

1 : Copy the file and count its characters.
```c
// Create file and write in it / Function.
void createFileFun(FILE *createFile)
{
    createFile = fopen("file.txt", "w");
    fprintf(createFile, "Hello World, Hello kifah");
    fclose(createFile);
}
```
```c
// Creat copy from file and count its characters / Function.
void createCopyFile(FILE *createFile, FILE *fileCopy, char x)
{
    int counter = 0;
    createFile = fopen("file.txt", "r");
    fileCopy = fopen("file_copy.txt", "w");
    while (fscanf(createFile, "%c", &x) != EOF)
    {
        fprintf(fileCopy, "%c", x);
        if (x != ' ' && x != '\n')
        {
            counter++;
        }
    }
    fclose(createFile);
    fclose(fileCopy);
    printf("Letter count in file is: %d\n\n", counter);
}
```
