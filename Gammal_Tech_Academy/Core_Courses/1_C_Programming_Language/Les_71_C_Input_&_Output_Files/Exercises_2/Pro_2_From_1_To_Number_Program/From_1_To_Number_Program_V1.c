

//* From 1 To Number Program (Version 1).

/*
* Modify the program to read the number from "kifah_1.text",
* and generate a sequence from 1 to that number,
* then write the sequence to "kifah_2.txt."

! Input:
! Please Enter a number: 10

! Output:
! 1
! 2
! 3
! 4
! 5
! 6
! 7
! 8
! 9
! 10
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(int num, FILE *f_1, FILE *f_2);

int main()
{
    // Declare Variables.
    FILE *file_1, *file_2;
    int number = 0;

    // Call Functions.
    ResultFun(number, file_1, file_2);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in From 1 To Number Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Create And Write In File 1 - Function.
void createAndWriteInFile1Fun(FILE *f_1, int num)
{
    // Create File 1.
    f_1 = fopen("kifah_1.txt", "w");

    // Write In File 1.
    fprintf(f_1, "%d", num);

    // Close File 1.
    fclose(f_1);
}

// Read From File 1 - Function.
int readFromFile1Fun(FILE *f_1, int num)
{
    // Open File 1.
    f_1 = fopen("kifah_1.txt", "r");

    // Read From File 1.
    fscanf(f_1, "%d", &num);

    // Close File 1.
    fclose(f_1);

    return num;
}

//  Write In File 2 - Function.
void createAndWriteInFile2Fun(FILE *f_2, int num)
{
    // Create File 2.
    f_2 = fopen("kifah_2.txt", "w");

    // Write In File 2.
    for (int i = 1; i <= num; i++)
    {
        fprintf(f_2, "%d\n", i);
    }

    // Close File 2.
    fclose(f_2);
}

// Result - Function.
void ResultFun(int num, FILE *f_1, FILE *f_2)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    createAndWriteInFile1Fun(f_1, num);
    num = readFromFile1Fun(f_1, num);
    createAndWriteInFile2Fun(f_2, num);
}

//* End Function ..
