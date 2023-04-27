

/* >>> From 1 To 100 Program <<< */

/* >>> Program in which function her job is to print the numbers from 1 to 100. <<< */

#include <stdio.h>

int from_1_to_100();

int main()
{
    printf("\n\nYou welcome in From 1 To 100 Program .. \n\n");

    from_1_to_100();

    printf("\n\n\n");

    return 0;
}

// Function ..
int from_1_to_100()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    }
}
