

/* >>> Example 2 <<< */

// www.gammal.tech

#include <stdio.h>

char *Upper(char y[]);

int main()
{
    char x[100];
    printf("\nWhat is your name: ");
    scanf("%s", &x[0]); // OR .. scanf("%s", x);

    printf("\n%s\n\n", Upper(x));

    return 0;
}

// Functions ..
char *Upper(char y[])
{
    for (int i = 0; y[i]; i++)
    {
        if (y[i] >= 'a' && y[i] <= 'z')
        {
            y[i] = y[i] - 32;
        }
    }

    return y; // return array name.
    //" OR " ..
    // return &y[0]; //return first element in array.
}