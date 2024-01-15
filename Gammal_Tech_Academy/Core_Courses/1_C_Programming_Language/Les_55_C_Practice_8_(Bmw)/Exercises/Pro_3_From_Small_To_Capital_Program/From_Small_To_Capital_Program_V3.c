

/* >>> From Small letters word To Capital letters word Program ( Version 3 ) <<< */

/* >>> Program converts any capital character to small character. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getSmallLettersWordFun(char smallLettersWord[25]);
char fromSmallToCapitalFun(char smallLettersWord[25]);

int main()
{
    welcomeMassageFun();

    char smallLettersWord[25];
    smallLettersWord[25] = getSmallLettersWordFun(smallLettersWord);
    // printf("\n%s\n\n", smallLettersWord);

    fromSmallToCapitalFun(smallLettersWord);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Small letters word To Capital letters word Program ( Version 3 ) ..\n\n");
}

// Get small letter word function;
char getSmallLettersWordFun(char smallLettersWord[25])
{
    printf("Please enter a small letter word: ");
    scanf("%s", smallLettersWord);
}

// Change from small letters word to capital letters word function;
char fromSmallToCapitalFun(char smallLettersWord[25])
{
    for (int i = 0; i <= smallLettersWord[i]; i++)
    {
        smallLettersWord[i] -= 32;
    }
    printf("\n%s\n\n", smallLettersWord);
}
