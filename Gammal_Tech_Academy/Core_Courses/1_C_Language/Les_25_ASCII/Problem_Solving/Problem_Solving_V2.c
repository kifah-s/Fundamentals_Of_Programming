

/* >>> Problem Solving ( Version 2 ) <<< */

/* >>> Problem statement

Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input :

Only one line containing a lowercase English letter C.

Output :

Print the next letter to C in the alphabet. <<< */

#include <stdio.h>

void welcomeMassageFun();
int p_s();

int main()
{
    welcomeMassageFun();
    p_s();
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Problem Solving ( Version 2 ) .. \n\n");
}

// PS function;
int p_s()
{
    char character;

    printf("Pleases enter character, 'B' for example : ");
    scanf("%c", &character);

    character = character + 1;

    printf("\nThe next character is : %c", character);

    printf("\n\n\n");
}