

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    char name[100], gender;

    printf("Enter full name followed by (m/f):\n");
    scanf("%[^\n]\n%c", name, &gender);

    printf("\n\n%s\n%c\n\n", name, gender);

    return 0;
}
