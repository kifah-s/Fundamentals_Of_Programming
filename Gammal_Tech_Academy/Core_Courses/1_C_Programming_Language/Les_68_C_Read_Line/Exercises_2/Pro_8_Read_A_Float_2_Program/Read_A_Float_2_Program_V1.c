

//* Read A Float 2 Program (Version 1).

/*
* Write a program to read two floating-point numbers from the file "float_input.txt" and print their product.

! Input:
! 5.3 6.9

! Output:
! Product of 5.30 and 6.9: 36.57
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, float myNum1, float myNum2);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    float myNumber1 = 0, myNumber2 = 0;

    // Call Functions.
    readFromFileFun(filePointer, myNumber1, myNumber2);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read A Float 2 Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("float_input.txt", "w");

    // Write in File.
    fprintf(filePoi, "5.3 6.9");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, float myNum1, float myNum2)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("float_input.txt", "r");

    // Read From File.
    fscanf(filePoi, "%f %f", &myNum1, &myNum2);

    // Create Variables.
    float product = myNum1 * myNum2;

    printf("Product of %.2f and %.2f: %.2f\n\n", myNum1, myNum2, product);

    // Close File.
    fclose(filePoi);
}
//* End Function ..
