

/* >>> Example 6 - ( version - 3 ) <<<*/

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Example 6 - ( version - 3 ) ..\n\n");

    int day, month, year;
    char c1, c2;

    printf("Please Enter your birthday : ");
    scanf("%d %c %d %c %d", &day, &c1, &month, &c2, &year);

    printf("\n--> %d %d %d\n\n\n", day, month, year);

    return 0;
}