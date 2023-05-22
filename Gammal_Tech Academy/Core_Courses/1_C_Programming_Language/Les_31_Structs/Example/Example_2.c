

/* >>> Example 2 <<< */

#include <stdio.h>

struct student
{
    char name[20], cell[20];
    int videos;
};

int main()
{
    struct student x;

    printf("\nWhat is your name?\n");
    scanf("%s", x.name);

    printf("What is your phone number?\n");
    scanf("%s", x.cell);

    x.videos = 0;

    printf("\nHi %s!\n", x.name);
    printf("%s\n%d\n\n", x.cell, x.videos);

    return 0;
}