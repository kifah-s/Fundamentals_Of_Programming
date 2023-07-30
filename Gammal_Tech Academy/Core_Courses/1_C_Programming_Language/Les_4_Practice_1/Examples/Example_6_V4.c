

/* >>> Example 6 ( version 4 ) <<<*/

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example 6 ( version 4 ) ..\n\n");

    int day, month, year;

    printf("Please Enter your birthday : ");
    scanf("%d %*c %d %*c %d", &day, &month, &year);

    printf("\n--> %d %d %d\n\n\n", day, month, year);

    return 0;
}