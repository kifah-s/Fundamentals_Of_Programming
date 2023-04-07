

/* Example scanf */

#include <stdio.h>

int main(void)
{
    int age;

    printf("\n\nHow old are you ?\n");
    scanf("%d", &age);
    printf("\nYou are %d years old !!\n\n\n", age);

    return 0;
}