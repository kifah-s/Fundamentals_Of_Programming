

/* >>> Example 2 <<< */

#include <stdio.h>

int main()
{
    int numberOfVaccinations, lessThan5, greaterThan5;
    
    printf("\nPlease Enter number of vaccinations : ");
    scanf("%d", &numberOfVaccinations);
    
    printf("\nPlease enter the number of children under 5 years old : ");
    scanf("%d", &lessThan5);
    
    printf("\nPlease enter the number of children over 5 years old : ");
    scanf("%d", &greaterThan5);

    if (lessThan5 + (greaterThan5 * 2) <= numberOfVaccinations)
    {
        printf("\nTrue\n\n");
    }
    else
    {
        printf("\nFalse\n\n");
    }

    return 0;
}
