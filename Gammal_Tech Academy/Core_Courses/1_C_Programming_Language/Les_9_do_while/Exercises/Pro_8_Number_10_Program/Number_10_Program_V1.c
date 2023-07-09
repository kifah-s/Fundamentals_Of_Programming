

/* >>> Number 10 Program ( Version 1 ) <<< */

/* >>> A program for printing numbers from -10 to 10 (using do.. while ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Number 10 Program ( Version 1 ) ..\n");

    int num = -10;
    do
    {
        printf("\n%d", num);
        num++;

    } while (num <= 10);

    printf("\n\n\n");

    return 0;
}