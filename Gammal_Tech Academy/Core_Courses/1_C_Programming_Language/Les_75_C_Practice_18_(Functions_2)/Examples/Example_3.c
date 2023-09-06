

/* >>> Example 3 <<< */

// www.gammal.tech

#include <stdio.h>
char Upper(char y[]);

int main()
{
    char x[100];
    printf("\nWhat is your name: ");
    scanf("%s", &x[0]); // OR .. scanf("%s", x);

    Upper(x);
    
    printf("\n%s\n\n", x);

    return 0;
}

// Functions ..
char Upper(char y[])
{
    for (int i = 0; y[i]; i++)
    {
        if (y[i] >= 'a' && y[i] <= 'z')
        {
            y[i] = y[i] - 32;
        }
    }
}