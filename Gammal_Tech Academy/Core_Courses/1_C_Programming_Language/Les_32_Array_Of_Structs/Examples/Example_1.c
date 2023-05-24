

/* >>> Example 1 <<< */

#include <stdio.h>

struct student
{
    char name[20], cell[20];
    int videos;
};

int main()
{
    struct student x[300];

    int i;

    for (i = 0; i < 2; i++)
    {
        printf("%d)", i + 1);
        printf("Name: ");
        scanf("%s", x[i].name);

        printf("Cell: ");
        scanf("%s", x[i].cell);

        printf("Videos: ");
        scanf("%d", &x[i].videos);
    }

    for (i = 0; i < 2; i++)
    {
        printf("%d)", i + 1);
        printf("Name: %s\n", x[i].name);
        printf("Cell: %s\n", x[i].cell);
        printf("Videos: %d\n", x[i].videos);
    }
    return 0;
}