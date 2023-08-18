

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example ..\n\n");

    int ticket;

    printf("Please, enter price: ");
    scanf("%d", &ticket);

    if (ticket >= 1000)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
