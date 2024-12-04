

//* Take Input Program (Version 1).

/*
* Write a program to take user input and store it in "kifah_1.txt."

! Input:
! Please Enter a number: 200

! Output:
! 200
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void createAndWriteInFileFun(FILE *filePoi, int num);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int number = 0;

    // Call Functions.
    createAndWriteInFileFun(filePointer, number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Take Input Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi, int num)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);

    // Create File.
    filePoi = fopen("kifah_1.txt", "w");

    // Write In File.
    fprintf(filePoi, "%d", num);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
