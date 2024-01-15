

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    char data[] = "gammal, tech, www.gammal.tech";

    char x1[20], x2[20], x3[20], new_data[100];

    sscanf(data, "%s %s %s", x1, x2, x3);

    x1[0] -= 32, x2[0] -= 32;

    sprintf(new_data, "%s %s https://%s", x1, x2, x3);

    printf("\n%s\n\n", new_data);

    return 0;
}
