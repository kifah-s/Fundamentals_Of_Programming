

/* >>> Number 5 Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter numbers without stopping until the entry of number 5, the program stops working and prints "Is Five" (using do.. while ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Number 5 Program ( Version 1 ) ..\n\n");

    int num;
    do
    {
        printf("Please enter number : ");
        scanf("%d", &num);

    } while (num != 5);

    printf("\n\"Is Five\"");

    printf("\n\n\n");

    return 0;
}