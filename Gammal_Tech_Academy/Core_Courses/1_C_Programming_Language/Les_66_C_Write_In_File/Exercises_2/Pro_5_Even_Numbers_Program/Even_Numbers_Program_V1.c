

//* Even Numbers Program (Version 1).

/*
 * Write a program to generate a file named "even_numbers.txt",
 * and write even numbers from 2 to 20, each separated by a space.
/*
! Output:
! 2 4 6 8 10 12 14 16 18 20
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
    printf("\n\nYou welcome in Even Numbers Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    welcomeMessageFun();

    filePoi = fopen("even_numbers.txt", "w");

    for (int i = 2; i <= 20; i = i + 2)
    {
        fprintf(filePoi, "%d ", i);
    }

    fclose(filePoi);
}
//* End Function ..
