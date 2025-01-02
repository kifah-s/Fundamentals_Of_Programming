

//* Is Palindrome Program (Version 1).

/*
* Write a program with a function isPalindrome that takes a string as input,
* and returns 1 if it's a palindrome and 0 if it's not.
* In the main function, take a string as input, call the isPalindrome function,
* and print whether the string is a palindrome or not.

! Input:
! Please enter a string: lmml

! Output:
! The string is a Palindrome.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[]);

int main()
{
    // Declare Variables.
    char myString[25];

    // Call Functions.
    resultFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Is Palindrome Program (Version 1) ..\n\n");
}

// Get String - Function.
void getStringFun(char myStr[])
{
    printf("Please enter a string: ");
    scanf("%s", myStr);
}

// is Palindrome - Function.
int isPalindromeFun(char myStr[])
{
    int length = strlen(myStr);
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        if (myStr[start] != myStr[end])
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

// Result - Function.
void resultFun(char myStr[])
{
    printWelcomeMessageFun();
    getStringFun(myStr);
    if (isPalindromeFun(myStr))
    {
        printf("The string is a Palindrome.\n\n");
    }
    else
    {
        printf("The string is Not a Palindrome.\n\n");
    }
}
//* End Function ..
