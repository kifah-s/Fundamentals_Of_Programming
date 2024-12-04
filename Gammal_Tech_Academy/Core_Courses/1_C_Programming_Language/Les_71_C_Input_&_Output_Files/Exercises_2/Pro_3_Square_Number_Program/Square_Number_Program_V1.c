

//* Square Number Program (Version 1).

/*
* Create a program that reads a number from a file named "numbers.txt" and prints its square.

! Input:
! Please enter a number: 9

! Output:
! Square of the number: 81
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(int num, FILE *fi);

int main()
{
    // Declare Variables.
    FILE *file;
    int number = 0;

    // Call Functions.
    ResultFun(number, file);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Square Number Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *fi, int num)
{
    // Create File 1.
    fi = fopen("numbers.txt", "w");

    // Write In File 1.
    fprintf(fi, "%d", num);

    // Close File 1.
    fclose(fi);
}

// Read From File - Function.
int readFromFileFun(FILE *fi, int num)
{
    // Open File.
    fi = fopen("numbers.txt", "r");

    // Read From File.
    fscanf(fi, "%d", &num);

    // Close File.
    fclose(fi);

    return num;
}

// Calculate Square - Function.
void calculateSquareFun(int num)
{
    int square = num * num;

    printf("\nSquare of the number: %d\n\n", square);
}

// Result - Function.
void ResultFun(int num, FILE *fi)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    createAndWriteInFileFun(fi, num);
    num = readFromFileFun(fi, num);
    calculateSquareFun(num);
}

//* End Function ..
