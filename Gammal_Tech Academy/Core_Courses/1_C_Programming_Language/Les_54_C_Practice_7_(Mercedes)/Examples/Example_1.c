

/* >>> Example 1 <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    char x[20][100] = {"Marcedec", "BMW", "Mazda", "Marcedec", "BMW", "Marcedec"};
    char y[20];
    int b, num = 0;
    printf("\nEnter the brand: ");
    scanf("%s", y);
    for (b = 0; b < 6; b++)
        num += strcmp(y, x[b]) == 0;
    printf("\n%d\n\n", num);
    return 0;
}
