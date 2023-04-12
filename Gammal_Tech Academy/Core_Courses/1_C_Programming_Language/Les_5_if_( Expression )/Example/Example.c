

/* >>> Example <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Example ..\n\n");

    int ticket;

    printf("Please, enter price: ");
    scanf("%d", &ticket);

    if (ticket >= 1000)
        printf("Yes\n");
    else
        printf("No\n");
}
