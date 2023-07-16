

/* >>> From 1 To 100 Program ( Version 2 ) <<< */

/* >>> Program in which function her job is to print the numbers from 1 to 100. <<< */

#include <stdio.h>

int from_1_to_100_fun();

int main()
{
    printf("\n\nYou welcome in From 1 To 100 Program ( Version 2 ) .. \n\n");

    from_1_to_100_fun();

    return 0;
}

// Functions ..
// From 1 To 100 Function;
int from_1_to_100_fun()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    printf("\n\n");
}
