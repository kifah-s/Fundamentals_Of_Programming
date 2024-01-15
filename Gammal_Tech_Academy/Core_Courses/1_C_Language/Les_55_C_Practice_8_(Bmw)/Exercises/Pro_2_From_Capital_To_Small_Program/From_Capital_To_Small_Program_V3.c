

/* >>> From Capital To Small Program ( Version 3 ) <<< */

/* >>> Program converts any capital character to small character. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
char getCapitalLettersWordFun(char capitalLetters[25]);
char fromCapitalToSmallFun(char capitalLetters[25]);

int main()
{
    welcomeMassageFun();

    char capitalLetters[25];
    capitalLetters[25] = getCapitalLettersWordFun(capitalLetters);
    /* printf("\n%s\n\n", capitalLetters); */

    
    fromCapitalToSmallFun(capitalLetters);
    
    

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Capital To Small Program ( Version 3 ) ..\n\n");
}

// Get Capital Letters word Function;
char getCapitalLettersWordFun(char capitalLetters[25])
{
    printf("please enter a capital letters word: ");
    scanf("%s", capitalLetters);
}

// From Capital To Small Function;
char fromCapitalToSmallFun(char capitalLetters[25])
{
    for (int i = 0; i <= capitalLetters[i]; i++)
    {
        capitalLetters[i] = capitalLetters[i] + 32;
    }
    printf("\n%s\n\n", capitalLetters);
    
}