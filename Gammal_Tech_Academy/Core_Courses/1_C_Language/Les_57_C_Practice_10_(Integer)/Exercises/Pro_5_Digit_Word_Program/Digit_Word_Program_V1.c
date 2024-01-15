

/* >>> Digit Word Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a word and the program counts the number of characters In every word and counting from the first each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getWordFun(char word[25]);
char numbersOfLettersFun(char word[25]);

int main()
{
    welcomeMassageFun();

    char word[25];
    word[25] = getWordFun(word);
    // printf("\n%s\n\n", word);

    numbersOfLettersFun(word);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digit Word Program ( Version 1 ) ..\n\n");
}

// Get word / function;
char getWordFun(char word[25])
{
    printf("Please enter a word: ");
    scanf("%s", word);
}

// Check numbers of letters / function;
char numbersOfLettersFun(char word[25])
{
    int counter = 0;
    for (int i = 0; word[i]; i++)
    {
        counter++;
    }
    printf("\nnumbers of letters is: %d\n\n", counter);
}