

/* >>> Project 2 ( Phone Book ) <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void titleFun();
void contactsCounterFun(FILE *contacts, char name[50], char number[50], int contactsCounter);
void readAllContactsFun(FILE *contacts, char c);
void containerAddSearchDeleteFun(FILE *contacts, char name[50], char c, char number[50]);
void addContactFun(FILE *contacts, char name[50], char number[50]);
void searchContactsFun(FILE *contacts, char name[50], char number[50]);

int main()
{
    welcomeMassageFun();

    FILE *contacts;
    char name[50], number[50], c;
    int contactsCounter = 0;

    titleFun();
    contactsCounterFun(contacts, name, number, contactsCounter);
    readAllContactsFun(contacts, c);
    containerAddSearchDeleteFun(contacts, name, c, number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Project 2 ( Phone Book ) ..\n\n");
}

// Title / Function.
void titleFun()
{
    printf(".. Phone Book ..\n\n");
}

// Contacts counter / Function.
void contactsCounterFun(FILE *contacts, char name[50], char number[50], int contactsCounter)
{
    contacts = fopen("contacts.txt", "r");
    for (; fscanf(contacts, "%s %*c %s", name, number) != EOF;)
    {
        // printf("%s : %s\n\n", name, number);
        contactsCounter++;
    }
    fclose(contacts);
    printf(".. %d contacts ..", contactsCounter);
    printf("\n\n");
}

// Read all contacts from file / Function.
void readAllContactsFun(FILE *contacts, char c)
{
    contacts = fopen("contacts.txt", "r");
    for (; fscanf(contacts, "%c", &c) != EOF;)
    {
        printf("%c", c);
    }
    printf("\n\n");
    fclose(contacts);

    /* contacts = fopen("contacts.txt", "r");
    while (fscanf(contacts, "%c", &c) != EOF)
    {
        printf("%c", c);
    }
    printf("\n\n");
    fclose(contacts); */
}

// Counter for Add, search, and Delete / Function.
void containerAddSearchDeleteFun(FILE *contacts, char name[50], char c, char number[50])
{
    int select = 0;
    printf("---------------------------------------------------------------------\n");
    printf("( 1 / Add ) , ( 2 / Search ) , ( 3 / Delete ) , ( Any Num / just View)\n");
    printf("---------------------------------------------------------------------\n\n");
    printf("Please select process number you need Implemented: ");
    scanf("%d", &select);

    if (select == 1)
    {
        addContactFun(contacts, name, number);
        readAllContactsFun(contacts, c);
    }
    else if (select == 2)
    {
        searchContactsFun(contacts, name, number);
    }
    else if (select == 3)
    {
    }
    else
    {
    }
}

// Add contact / Function.
void addContactFun(FILE *contacts, char name[50], char number[50])
{
    printf("\nPlease enter name and number ( name - number ) : ");
    scanf("%s %s", name, number);

    contacts = fopen("contacts.txt", "a+");
    fprintf(contacts, "%s : %s\n", name, number);
    fclose(contacts);

    printf("\n");
}

// Search contacts / Function.
void searchContactsFun(FILE *contacts, char name[50], char number[50])
{
    char foundName[50], foundNumber[50];
    int foundCounter = 0;
    printf("\nPlease enter name: ");
    scanf("%s", name);

    contacts = fopen("contacts.txt", "r");

    for (; fscanf(contacts, "%s %*c %s", foundName, foundNumber) != EOF;)
    {
        if (strcmp(name, foundName) == 0)
        {
            printf("\nFound: %s\n", name);
            printf("----------------------\n");
            printf("%s : %s\n", foundName, foundNumber);
            printf("----------------------\n");
            break;
        }
    }
    if (foundCounter == 0)
    {
        printf("\nNot Found: %s\n\n", name);
    }

    fclose(contacts);

    printf("\n");
}