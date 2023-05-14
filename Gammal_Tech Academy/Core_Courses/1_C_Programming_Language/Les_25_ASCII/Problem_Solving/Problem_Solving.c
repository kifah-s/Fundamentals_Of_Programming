

/* >>> Problem Solving <<< */

/* >>> Problem statement

Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input :

Only one line containing a lowercase English letter C.

Output :

Print the next letter to C in the alphabet. <<< */

#include <stdio.h>

int p_s();

int main(void)
{
    printf("\n\nYou welcome in Problem Solving .. \n\n");

    p_s();
}

// Functions ..
int p_s()
{
    char character;

    printf("Pleases enter character, 'B' for example : ");
    scanf("%c", &character);

    character = character + 1;

    printf("\nThe next character is : %c", character);

    printf("\n\n\n");
}