

/* >>> From Capital To Small Program ( Version 1 ) <<< */

/* >>> Program converts any capital character to small character. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getCapitalLetterFun(char capitalLetter);
char fromCapitalToSmallFun(char capitalLetter);

int main()
{
    welcomeMassageFun();

    char capitalLetter;
    capitalLetter = getCapitalLetterFun(capitalLetter);
    // printf("\n%c\n\n", capitalLetter);

    char smallLetter;
    smallLetter = fromCapitalToSmallFun(capitalLetter);
    printf("\n%c\n\n", smallLetter);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Capital To Small Program ( Version 1 ) ..\n\n");
}

// Get Capital Letter Function;
char getCapitalLetterFun(char capitalLetter)
{
    printf("please enter a capital letter: ");
    scanf("%c", &capitalLetter);

    return capitalLetter;
}

// From Capital To Small Function;
char fromCapitalToSmallFun(char capitalLetter)
{
    capitalLetter = capitalLetter + 32;
}