

/* >>> Example 1 <<< */

// www.gammal.tech

#include <stdio.h>

void Upper(char y[])
{
    for (int i = 0; y[i]; i++)
        if (y[i] >= 'a' && y[i] <= 'z')
        {
            y[i] -= 32;
        }
}

int main()
{
    char x[100];
    printf("\nWhat is your name: ");
    scanf("%s", x);

    Upper(x);
    printf("\n%s\n\n", x);

    return 0;
}
