

/* Example if ( Expression ) */

#include <stdio.h>

int main(void)
{
    int ticket;

    printf("Please, enter price: ");
    scanf("%d", &ticket);

    if (ticket >= 1000)
        printf("Yes\n");
    else
        printf("No\n");
}
