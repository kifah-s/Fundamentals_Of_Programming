

/* >>> First Letters Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter it a sentence and converts the first letter of each word into Capital. <<< */

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
    printf("\n\nYou welcome in First Letters Program ( Version 1 ) ..\n\n");
}

// Get sentence / Function.
void getSentenceFun(char arr[])
{
    printf("Please enter beautiful sentence: ");
    scanf(" %[^\n]", arr);
}

// changing first letters from all word / Function.
void changingLetterFun(char arr[])
{
    arr[0] -= 32;
    for (int i = 0; arr[i]; i++)
    {
        if (arr[i] == ' ')
        {
            arr[i + 1] -= 32;
        }
    }
}