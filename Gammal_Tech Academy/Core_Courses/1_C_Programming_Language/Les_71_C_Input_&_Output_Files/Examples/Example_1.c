

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    FILE *In = fopen("gammal1.txt", "r");
    FILE *Out = fopen("gammal2.txt", "w");

    int i, n;
    fscanf(In, "%d", &n);

    for (i = 1; i <= n; i++)
    {
        fprintf(Out, "%d\n", i);
    }
    
    fclose(In);
    fclose(Out);
    
    return 0;
}
