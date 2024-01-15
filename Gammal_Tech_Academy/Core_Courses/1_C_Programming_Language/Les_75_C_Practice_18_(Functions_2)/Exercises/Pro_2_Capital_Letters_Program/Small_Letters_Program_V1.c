

/* >>> Capital Letters Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter it into a sentence and converts it into capital letters. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void getSentenceFun(char arr[]);
void changingLetterFun(char arr[]);

int main()
{
    welcomeMassageFun();

    char sentence[100];
    getSentenceFun(sentence);
    // printf("\n%s\n\n", sentence); // Check.

    changingLetterFun(sentence);
    printf("\n%s\n\n", sentence);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Capital Letters Program ( Version 1 ) ..\n\n");
}

// Get sentence / Function.
void getSentenceFun(char arr[])
{
    printf("Please enter beautiful sentence: ");
    scanf(" %[^\n]", arr);
}

// changing any small letter in sentence for Capital letter / Function.
void changingLetterFun(char arr[])
{
    for (int i = 0; arr[i] /* OR arr[i] != '\0' */; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
    }
}