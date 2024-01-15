

/* >>> Example 1 <<< */

#include <stdio.h>

struct student
{
    char name[15], cell[20];
    int videos;
};

int main()
{
    struct student x;

    printf("\nWhat is your name ? ");
    scanf("%s", x.name);

    printf("what is your phone number? ");
    scanf("%s", x.cell);

    printf("How many videos have you watched? ");
    scanf("%d", &x.videos);

    printf("\nHi %s!\n", x.name);
    printf("cell : %s\nvideos: %d \n\n", x.cell, x.videos);
}