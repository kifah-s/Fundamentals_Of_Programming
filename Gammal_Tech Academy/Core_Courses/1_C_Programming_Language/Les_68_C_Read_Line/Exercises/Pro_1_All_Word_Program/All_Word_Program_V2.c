

/* >>> All Words Program ( Version 2 ) <<< */

/* >>> A program that asks the user to write a sentence with a maximum of 400 characters and prints all the words that the user wrote (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void getStringFun(char string[400]);
void printStringFun(char string[400], char letter);

int main()
{
    welcomeMassageFun();

    char string[400], letter;

    getStringFun(string);

    printStringFun(string, letter);

    return 0;
}

// Functions ..
// Welcome massage / function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in All Words Program ( Version 2 ) ..\n\n");
}

// Get string from user / Function.
void getStringFun(char string[400])
{
    printf("Please enter a sentence: ");
    scanf("%[^\n]", string);
}

// Print string / Function.
void printStringFun(char string[400], char letter)
{
    printf("\n");
    for (int i = 0; string[i]; i++)
    {
        letter = string[i];
        printf("%c", letter); // printing a string as a chars.
    }
    printf("\n\n");
}