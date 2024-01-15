

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    FILE *g = fopen("gammal.txt", "r");
    FILE *copy = fopen("gammal_copy.txt", "w");

    int count = 0;
    char ch;

    while (fscanf(g, "%c", &ch) != EOF)
    {
        fprintf(copy, "%c", ch);
        if (ch != ' ' && ch != '\n')
            count++;
    }
    printf("%d\n", count);

    return 0;
}
