

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    FILE *In = fopen("gammal1.txt", "w");
    fprintf(In, "9");
    fclose(In);

    int num = 0;
    In = fopen("gammal1.txt", "r");
    fscanf(In, "%d", &num);
    fclose(In);
    // printf("\n%d\n\n", num); // Check.

    FILE *Out = fopen("gammal2.txt", "w");

    for (int i = 1; i <= num; i++)
    {
        fprintf(Out, "%d\n", i);
    }
    fclose(Out);

    return 0;
}
