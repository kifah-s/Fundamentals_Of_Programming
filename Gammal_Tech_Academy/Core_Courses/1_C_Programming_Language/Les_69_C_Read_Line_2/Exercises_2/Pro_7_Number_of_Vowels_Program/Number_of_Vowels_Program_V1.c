

//* Number of Vowels Program (Version 1).

/*
* Write a program to read a line and count the number of vowels in it.

! Input:
! Please Enter a line: Hello World

! Output:
! Number of Vowels: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printNumberOfVowelsFun(char li[100], int cou);

int main()
{
    // Declare Variables.
    char line[100];
    int counterVowels = 0;

    // Call Functions.
    printNumberOfVowelsFun(line, counterVowels);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number of Vowels Program (Version 1) ..\n\n");
}

// Read Line - Function.
void readLineFun(char li[100])
{
    printf("Please Enter a Line: ");
    scanf("%[^\n]", li);
}

// Count Vowels - Function.
int countVowelsFun(char li[100], int cou)
{
    for (int i = 0; i < strlen(li); i++) // OR: li[i] != '\0';
    {
        if (li[i] == 'A' || li[i] == 'a' || li[i] == 'E' || li[i] == 'e' || li[i] == 'I' || li[i] == 'i' || li[i] == 'O' || li[i] == 'o' || li[i] == 'U' || li[i] == 'u')
        {
            cou++;
        }
    }

    return cou;
}

// Print Number of Vowels - Function.
void printNumberOfVowelsFun(char li[100], int cou)
{
    welcomeMessageFun();
    readLineFun(li);
    cou = countVowelsFun(li, cou);

    printf("\nNumber of Vowels: %d\n\n", cou);
}
//* End Function ..
