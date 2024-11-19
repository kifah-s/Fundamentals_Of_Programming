

//* Array is Palindrome Program (Version 1).

/*
 * Write a program to check if an array is palindrome.
 */

/*
! Output:
! The array is a palindrome.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int myArr[], int size, int revArr[], bool pal);

int main()
{
    // Declare Variables.
    int myArray[] = {1, 3, 1};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int reverseArray[size];
    bool palindrome = true;

    // Call Functions.
    resultFun(myArray, size, reverseArray, palindrome);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array is Palindrome Program (Version 1) ..\n\n");
}

// Reverse Array - Function.
void reverseArrayFun(int myArr[], int size, int revArr[])
{
    for (int i = 0; i < size; i++)
    {
        revArr[size - 1 - i] = myArr[i];
    }
}

// Check Arrays - Function.
bool checkArraysFun(int myArr[], int size, int revArr[], bool pal)
{
    for (int i = 0; i < size; i++)
    {
        if (myArr[i] != revArr[i])
        {
            pal = false;
        }
    }

    if (pal == true)
    {
        printf("The array is a palindrome.\n\n");
    }
    else
    {
        printf("The array is Not a palindrome.\n\n");
    }
}

// Print Result - Function.
void resultFun(int myArr[], int size, int revArr[], bool pal)
{
    welcomeMessageFun();
    reverseArrayFun(myArr, size, revArr);
    checkArraysFun(myArr, size, revArr, pal);
}
//* End Function ..
