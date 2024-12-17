

//* Name and Number 4 Program (Version 1).

/*
* Create a program that allows the user to input multiple contacts,
* and appends them to "simple_contacts.txt" until the user decides to stop.

! Input & Output:
! Please enter a name: kifah
! Please enter a number: 123456789
! Do you want to add another contact? (y/n): y
! Please enter a name: saloum
! Please enter a number: 123456789
! Do you want to add another contact? (y/n): n
! Contact added successfully.

! Output:
! kifah 123456789
! saloum 123456789
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char name[50], char num[50], FILE *filePoi, char ans);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char name[50], number[50], answer;

    // Call Functions.
    resultFun(name, number, filePointer, answer);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Name and Number 4 Program (Version 1) ..\n\n");
}

// Receive Name - Function.
void receiveNameFun(char name[50])
{
    printf("Please enter a name: ");
    scanf(" %[^\n]", name);
}

// Receive Number - Function.
void receiveNumberFun(char num[50])
{
    printf("Please enter a number: ");
    scanf(" %[^\n]", num);
}

// Receive Answer - Function.
char receiveAnswerFun(char ans)
{
    printf("Do you want to add another contact? (y/n): ");
    scanf(" %c", &ans);

    return ans;
}

// Save Name And Number In File - Function.
void saveNameAndNumberInFileFun(FILE *filePoi, char name[50], char num[50])
{
    // Create File.
    filePoi = fopen("simple_contacts.txt", "a");

    // Print Name and Number In File.
    fprintf(filePoi, "%s ", name);
    fprintf(filePoi, "%s\n", num);

    // Close File.
    fclose(filePoi);
}

// Result - Function.
void resultFun(char name[50], char num[50], FILE *filePoi, char ans)
{
    welcomeMessageFun();

    do
    {
        receiveNameFun(name);
        receiveNumberFun(num);
        saveNameAndNumberInFileFun(filePoi, name, num);
        ans = receiveAnswerFun(ans);
    } while (ans == 'y');

    // Added successfully.
    printf("\nContact added successfully.\n\n");
}

//* End Function ..
