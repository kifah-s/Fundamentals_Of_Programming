

/* >>> Longest Word Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter two words and prints the longer word. <<< */

#include <stdio.h>
#include <string.h>

int longest_word();

int main()
{
    printf("\n\nYou welcome in Longest Word Program ( Version 2 ) ..\n\n");

    longest_word();

    return 0;
}
// Functions .. 
// longest word function;
int longest_word()
{
    // Declaration arrays of characters and variable;
    char w1[20], w2[20];
    int one = 0, two = 0, i;

    // Receive values from the user;
    printf("Enter 2 words: ");
    scanf("%s %s", w1, w2);

    // Check longest word;
    for (i = 0; i < w1[i] != '\0'; i++)
    {
        one++;
    }

    for (i = 0; i < w2[i] != '\0'; i++)
    {
        two++;
    }

    if (one > two)
    {
        printf("\n%s", w1);
    }
    else
    {
        printf("\n%s", w2);
    }

    printf("\n\n\n");
}