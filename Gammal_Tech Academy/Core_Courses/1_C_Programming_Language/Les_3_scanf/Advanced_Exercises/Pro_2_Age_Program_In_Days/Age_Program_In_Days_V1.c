

/* >>> Age Program In Days ( Version 1 ) <<< */

/* >>> A program that asks a person about his age in years and then prints his age in days without leap years. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Age Program In Days ( Version 1 ) ..\n\n");

    int num_1;

    printf("Enter your age in years : ");
    scanf("%d", &num_1);
    num_1 = num_1 * 365;

    printf("\nYour age in days : %d\n\n\n", num_1);

    return 0;
}