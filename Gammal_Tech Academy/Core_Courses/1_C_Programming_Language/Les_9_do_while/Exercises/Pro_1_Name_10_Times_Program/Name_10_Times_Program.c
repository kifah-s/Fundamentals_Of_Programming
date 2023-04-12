

/* >>> Name 10 Times Program <<< */

/* >>> A program that prints a person's name 10 times (using do.. while ). <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Name 10 Times Program ..\n\n");

    char name[30];
    int i = 0;

    printf("Please enter your name : ");
    scanf("%s", &name);

    do
    {
        printf("\n%s", name);

        i++;

    } while (i < 10);

    printf("\n\n\n");
}