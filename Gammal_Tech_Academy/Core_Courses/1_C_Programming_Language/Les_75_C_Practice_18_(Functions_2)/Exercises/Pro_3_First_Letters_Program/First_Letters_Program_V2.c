

/* >>> First Letters Program ( Version 2 ) <<< */

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
    printf("\n\nYou welcome in First Letters Program ( Version 2 ) ..\n\n");
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
    if (arr[0] <= 'z' && arr[0] >= 'a')
    {
        arr[0] -= 32;
    }

    for (int i = 0; arr[i] /* OR arr[i]  != '\0' */; i++)
    {
        if (arr[i] == ' ')
        {
            if (arr[i + 1] <= 'z' && arr[i + 1] >= 'a')
            {
                arr[i + 1] -= 32;
            }
        }
    }
}