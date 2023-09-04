

/* >>> Example 1 <<< */

#include <stdio.h>

int main()
{
    FILE *contacts = fopen("contacts.txt", "a+");
    char ch, name[100], number[100];

    while (fscanf(contacts, "%c", &ch) != EOF)
    {
        printf("%c", ch);
    }

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter number: ");
    scanf("%s", number);

    fprintf(contacts, "%s %s\n", name, number);

    fclose(contacts);

    return 0;
}
