

/* >>> Example 4 <<< */

#include <stdio.h>

// Global Array;
int glo_arr[10], g;

int main()
{
    int loc_arr[10], l;

    printf("\nGlobal Array : \n");
    for (g = 0; g < 10; g++)
    {
        printf("%d  ", glo_arr[g]);
    }

    printf("\n\n-----------------------------------------\n");

    printf("\nLocal Array : \n");
    for (l = 0; l < 10; l++)
    {
        printf("%d  ", loc_arr[l]);
    }

    printf("\n\n\n");

    return 0;
}