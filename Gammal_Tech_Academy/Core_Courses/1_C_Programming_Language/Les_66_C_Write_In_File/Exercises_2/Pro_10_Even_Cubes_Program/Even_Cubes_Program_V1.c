

//* Even Cubes Program (Version 1).

/*
 * Create a program to generate a file named "even_cubes.txt",
 * and write the cubes of even numbers from 2 to 10, each on a new line.
/*
! Output:
! 8
! 64
! 216
! 512
! 1000
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void createAndWriteInFileFun(FILE *filePoi);

int main()
{
    // Declare Variables.
    FILE *filePointer;

    // Call Functions.
    createAndWriteInFileFun(filePointer);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even Cubes Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    // Create File.
    filePoi = fopen("even_cubes.txt", "w");

    // Write in File.
    for (int i = 2; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            int cub = i * i * i;
            fprintf(filePoi, "%d\n", cub);
        }
    }

    // Close File.
    fclose(filePoi);
}
//* End Function ..
