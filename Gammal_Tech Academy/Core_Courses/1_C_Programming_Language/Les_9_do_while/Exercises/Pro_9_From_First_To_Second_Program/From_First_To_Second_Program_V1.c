

/* >>> From First To Second Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers smaller than the second and is printed from the first number to the second number (using do.. while ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in From First \' Smaller Number \' To Second \' Bigger Number \' Program ( Version 1 ) ..\n\n");

    int num_S, num_B;

    printf("Please enter first number \' Smaller Number \' : ");
    scanf("%d", &num_S);

    printf("Please enter second number \' Bigger Number \' : ");
    scanf("%d", &num_B);

    do
    {
        printf("\n%d", num_S);
        num_S++;

    } while (num_S <= num_B);

    printf("\n\n\n");

    return 0;
}