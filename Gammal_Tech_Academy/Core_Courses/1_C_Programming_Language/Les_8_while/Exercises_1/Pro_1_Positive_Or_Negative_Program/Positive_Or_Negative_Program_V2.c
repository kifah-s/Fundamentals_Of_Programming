

/* >>> Positive Or Negative Program ( Version 2 )<<< */

/* >>> A program that asks a person to enter different numbers if the number is positive and his side applies the word "is positive" and if he negatively applies the number and his side applies the word "is negative" (using while). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Positive Or Negative Program ( Version 2 ) ..\n\n");

    int num;

    printf("Please enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        while (num > 0)
        {
            printf("\nThis is number ( %d ) : Positive", num);
            num = num - num;
        }

        while (num < 0)
        {
            printf("\nThis is number ( %d ) : Negative", num);
            num = -num + num;
        }
    }
    printf("\n\n\n");

    return 0;
}