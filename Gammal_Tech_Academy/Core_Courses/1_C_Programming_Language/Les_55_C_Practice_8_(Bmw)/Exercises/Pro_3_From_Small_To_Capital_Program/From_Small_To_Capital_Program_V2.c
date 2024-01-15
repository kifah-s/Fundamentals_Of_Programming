

/* >>> From Small To Capital Program ( Version 2 ) <<< */

/* >>> Program converts any capital character to small character. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getSmallLetterFun(char smallLetter);
char fromSmallToCapitalFun(char smallLetter);

int main()
{
    welcomeMassageFun();

    char smallLetter;
    smallLetter = getSmallLetterFun(smallLetter);
    // printf("\n%c\n\n", smallLetter);

    fromSmallToCapitalFun(smallLetter);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Small To Capital Program ( Version 2 ) ..\n\n");
}

// Get small letter function;
char getSmallLetterFun(char smallLetter)
{
    printf("Please enter a small letter: ");
    scanf("%c", &smallLetter);

    return smallLetter;
}

// Change from small letter to capital letter function;
char fromSmallToCapitalFun(char smallLetter)
{
    smallLetter -= 32;

    printf("\n%c\n\n", smallLetter);
}