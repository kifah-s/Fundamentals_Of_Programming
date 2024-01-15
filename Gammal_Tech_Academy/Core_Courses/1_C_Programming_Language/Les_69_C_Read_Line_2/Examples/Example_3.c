

/* >>> Example 3 <<< */

#include <stdio.h>

int main()
{
    char username[100], domain[100];

    printf("\nEmail: ");
    scanf("%[^@]", username);
    scanf("%*c");
    scanf("%[^\n]", domain);

    printf("Username: %s\n", username);
    printf("Domain: %s\n", domain);
}