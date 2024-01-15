

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    FILE *f = fopen("gammal.txt", "r"); // Open the file for read.

    char x;

    while (fscanf(f, "%c", &x) != EOF) // Read all file.
    {
        printf("%c", x);
    }
    
    return 0;
}