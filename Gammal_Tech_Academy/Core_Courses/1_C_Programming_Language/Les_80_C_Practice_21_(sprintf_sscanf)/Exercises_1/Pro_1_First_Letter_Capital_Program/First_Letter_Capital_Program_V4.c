

/* >>> First Letter Capital Program ( Version 4 ) <<< */

/* >>> The program that has an array is named names that has 3 names separated with (,) the program should print the names; first letter is capital and before each name is written .Mr such as Mr.Ahmed without any change in the original array. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
char *firstLetterCapitalFun(char arr[], char newArr[]);
void printNewArrayFun(char newArr[], char word[3][25]);

int main()
{
    welcomeMassageFun();

    char arr[] = {"kifah, madaal, saloum."}, newArr[100], word[3][25];

    firstLetterCapitalFun(arr, newArr);
    // printf("\n%s\n\n", newArr); // Check.

    printNewArrayFun(newArr, word);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Letter Capital Program ( Version 4 ) ..\n\n");
}

// First Letter Capital / Function.
char *firstLetterCapitalFun(char arr[], char newArr[])
{
    sscanf(arr, "%[^\n]", newArr);

    if (newArr[0] <= 'z' && newArr[0] >= 'a')
    {
        newArr[0] -= 32;
    }

    for (int i = 1; newArr[i]; i++)
    {
        if (newArr[i] == ' ')
        {
            if (newArr[i + 1] <= 'z' && newArr[i + 1] >= 'a')
            {
                newArr[i + 1] -= 32;
            }
        }
    }

    return newArr;
}

// Print new array / Function.
void printNewArrayFun(char newArr[], char word[3][25])
{
    sscanf(newArr, "%s %s %s", word[0], word[1], word[2]);

    for (int i = 0; i < 3; i++)
    {
        printf("Mr. %s\n", word[i]);
    }

    printf("\n\n");
}
