

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    int x;
    printf("\nEnter Grade: ");
    scanf("%d", &x);

    switch (x)
    {
    case 91 ... 100:
        printf("\nA\n\n");
        break;
    case 81 ... 90:
        printf("\nB\n\n");
        break;
    case 71 ... 80:
        printf("\nC\n\n");
        break;
    default:
        printf("\nError Grade\n\n");
    }
    return 0;
}
