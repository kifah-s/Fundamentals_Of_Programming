

/* >>> From First To Second Program <<< */

/* >>> A program that asks a person to enter two numbers smaller than the second and is printed from the first number to the second number (using do.. while ). <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in From First To Second Program ..\n\n");

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
}