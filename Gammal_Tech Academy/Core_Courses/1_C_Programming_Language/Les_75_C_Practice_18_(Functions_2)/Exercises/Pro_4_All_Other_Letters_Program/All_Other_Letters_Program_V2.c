

/* >>> All Other Letters Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter it in a sentence and converts the first letter of each word to capital letter and the rest of the letters are all small (for outstanding students). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void getSentenceFun(char arr[]);
void changingLettersToSmallFun(char arr[]);
void changingFirstLettersFun(char arr[]);

int main()
{
    welcomeMassageFun();

    char sentence[100];
    getSentenceFun(sentence);
    // printf("\n%s\n\n", sentence); // Check.

    changingLettersToSmallFun(sentence);
    // printf("\n%s\n\n", sentence); // Check.

    changingFirstLettersFun(sentence);
    printf("\n%s\n\n", sentence);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in All Other Letters Program ( Version 2 ) ..\n\n");
}

// Get sentence / Function.
void getSentenceFun(char arr[])
{
    printf("Please enter beautiful sentence: ");
    scanf(" %[^\n]", arr);
}

// changing All Letters to small letters / Function.
void changingLettersToSmallFun(char arr[])
{
    for (int i = 0; arr[i] /* OR arr[i] != '\0' */ ; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] += 32;
        }
    }
}

// changing First Letters to capital letters / Function.
void changingFirstLettersFun(char arr[])
{
    if (arr[0] <= 'z' && arr[0] >= 'a')
    {
        arr[0] -= 32;
    }

    for (int i = 0; arr[i] /* Or arr[i] != '\0' */; i++)
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


