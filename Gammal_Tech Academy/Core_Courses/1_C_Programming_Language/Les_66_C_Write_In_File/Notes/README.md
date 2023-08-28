# Notes ..

- Steps to create a file and write in it:

```c
    // 1. pointer to a file
    FILE *filePointer;

    // 2. Open the file for writing, if the file is not found it will be created.
    filePointer = fopen("Student_Name_V1.txt", "w");

    // 3. Write in file.
    fprintf(filePointer, "\n\nYou welcome in Student Name Program ( Version 1 ) ..\n\n");

    // 3. Write in file.
    fprintf(filePointer, "My name \' Kifah Saloum \'");

    // 4. Close the file after writing is finished.
    fclose(filePointer);


```
