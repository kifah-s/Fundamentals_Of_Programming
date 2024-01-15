

/* >>> Two Sentences Program ( Version 1 ) <<< */

/* >>> A program that asks the user to write a sentence with a maximum of 400 characters and prints a sign (/). Required output is to print the words before the mark in one line and the words after the mark in a second line. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
void getSentencesFun(char sentences_1[100], char sentences_2[100]);

int main()
{
    welcomeMassageFun();

    char sentences_1[100], sentences_2[100];
    getSentencesFun(sentences_1, sentences_2);
    printf("\nsentences 1: %s\n", sentences_1);
    printf("sentences 2: %s\n\n", sentences_2);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Two Sentences Program ( Version 1 ) ..\n\n");
}

// Get Sentences / Function.
void getSentencesFun(char sentences_1[100], char sentences_2[100])
{
    printf("Please enter two sentences, Sentences before \' / \', and sentences after \' / \': ");
    scanf("%[^/] %*c %[^\n]", sentences_1, sentences_2);
    // %[^/] : Read Sentences before  / .
    // %*c : Read / .
    // %[^/] : Read Sentences after  / .
}