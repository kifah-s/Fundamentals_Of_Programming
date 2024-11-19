

//* Array is Palindrome Program (Version 2).

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

void resultFun(int myArr[], int size, bool pal);

int main()
{
    // Declare Variables.
    int myArray[] = {1, 3, 1};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    bool palindrome = true;

    // Call Functions.
    resultFun(myArray, size, palindrome);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array is Palindrome Program (Version 2) ..\n\n");
}

// Check Array - Function.
bool checkArraysFun(int myArr[], int size, bool pal)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (myArr[i] != myArr[size - 1 - i])
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
void resultFun(int myArr[], int size, bool pal)
{
    welcomeMessageFun();
    checkArraysFun(myArr, size, pal);
}
//* End Function ..
