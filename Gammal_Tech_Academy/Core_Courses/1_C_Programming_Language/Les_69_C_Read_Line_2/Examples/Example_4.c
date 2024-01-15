

/* >>> Example 4 <<< */

#include <stdio.h>

int main()
{
    char username[100], domain[100];
    printf("\nEmail: ");
    scanf("%[^@]%*c%[^\n]", username, domain);

    printf("Username: %s\n", username);
    printf("Domain: %s\n", domain);
}