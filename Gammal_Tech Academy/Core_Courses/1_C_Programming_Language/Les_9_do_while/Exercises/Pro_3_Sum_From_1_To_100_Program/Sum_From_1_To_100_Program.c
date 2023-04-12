

/* >>> Sum From 1 To 100 Program <<< */

/* >>> A program that prints numbers from 1 to 100 and collects them all and prints the total (using do.. while ). <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Sum From 1 To 100 Program ..\n\n");

    int i = 1, sum = 0;

    do
    {
        printf("\n%d", i);
        sum = sum + i;
        i++;

    } while (i <= 100);

    printf("\n\nSum numbers from 1 to 100 is : %d", sum);
    printf("\n\n\n");
}