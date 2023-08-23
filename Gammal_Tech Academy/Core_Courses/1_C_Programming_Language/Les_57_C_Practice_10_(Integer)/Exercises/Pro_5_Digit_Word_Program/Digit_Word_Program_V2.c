

/* >>> Digit Word Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a word and the program counts the number of characters In every word and counting from the first each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char numbersOfLettersFun(char word[25]);

int main()
{
    welcomeMassageFun();

    char word[25];
    numbersOfLettersFun(word);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digit Word Program ( Version 2 ) ..\n\n");
}

// Check numbers of letters / function;
char numbersOfLettersFun(char word[25])
{
start:

    printf("Please enter a word: ");
    scanf("%s", word);

    int counter = 0;
    for (int i = 0; word[i]; i++)
    {
        counter++;
    }
    printf("\nnumbers of letters is: %d\n\n", counter);

    goto start;
}