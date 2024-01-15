

/* >>> From 1 To Input Program ( Version 2 ) <<< */

/* >>> A program that requests the user to enter a number in a function that prints the numbers from 1 to the user's income number. <<< */

#include <stdio.h>

int from_1_to_input();

int main()
{
    printf("\n\nYou welcome in From 1 To Input Program ( Version 2 ) .. \n\n");

    from_1_to_input();

    return 0;
}

// Functions ..
// from 1 to input function;
int from_1_to_input()
{
    int i, num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("\n%d", i);
    }

    printf("\n\n\n");
}
