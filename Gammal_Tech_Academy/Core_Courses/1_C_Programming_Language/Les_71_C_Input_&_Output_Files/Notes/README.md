# Notes ..

<br>

1. i < nameInFile1[i], Or: i < lengthName:

```c
// Creat file 2 for read / function.
char creatFile2ForReadFun(char nameInFile1[25], FILE *file2ForWrite)
{
    file2ForWrite = fopen("file_2_for_write_V1.txt", "w");
    fprintf(file2ForWrite, "Name Letters: \n");
    // int lengthName = strlen(nameInFile1);
    for (int i = 0; i < nameInFile1[i] /* Or: i < lengthName  */; i++)
    {
        fprintf(file2ForWrite, "%c\n", nameInFile1[i]);
    }
    fclose(file2ForWrite);
}
```
