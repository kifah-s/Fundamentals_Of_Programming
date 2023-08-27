

/* >>> Example 1 <<< */

#include <stdio.h>
int main()
{
    FILE *f = fopen("gammal.txt", "w");
    
    fprintf(f, "Hello Gammal Tech\n");


    return 0;
}