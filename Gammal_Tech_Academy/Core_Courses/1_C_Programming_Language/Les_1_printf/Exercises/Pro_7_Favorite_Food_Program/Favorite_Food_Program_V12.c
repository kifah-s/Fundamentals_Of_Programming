

/* >>> Favorite Food Program ( Version 12 ) <<< */

/* >>> Favorite Food Program : Even if you eat different types of food, you must have favorite foods..
Required : Write a program that prints 3 of your favorite eaters. <<< */

#include <stdio.h>

char *welcome_massage_fun();
char *favorite_fun();
char *protein_fun();
char *authority_fun();
char *pasta_fun();

int main()
{
    char *wel_mas[] = {welcome_massage_fun()};
    /* printf(*wel_mas); */
    printf("%s", *wel_mas);

    char *favorite[] = {favorite_fun()};
    /* printf(*favorite); */
    printf("%s", *favorite);

    char *protein[] = {protein_fun()};
    /* printf(*protein); */
    printf("%s", *protein);

    char *authority[] = {authority_fun()};
    /* printf(*authority); */
    printf("%s", *authority);

    char *pasta[] = {pasta_fun()};
    /* printf(*pasta); */
    printf("%s", *pasta);

    return 0;
}

// Function ..
// Welcome massage function;
char *welcome_massage_fun()
{
    char *wel_mas[] = {"\n\nYou welcome in Favorite Food Program ( Version 12 ) ..\n\n"};
    return *wel_mas;
}

// Favorite function;
char *favorite_fun()
{
    char *favorite[] = {"My Favorite food is : \n"};
    return *favorite;
}

// Protein function;
char *protein_fun()
{
    char *protein[] = {"- Food that contains protein\n"};
    return *protein;
}

// Authority function;
char *authority_fun()
{
    char *authority[] = {"- Authority\n"};
    return *authority;
    printf("- The pasta\n\n\n");
}

// Pasta function;
char *pasta_fun()
{
    char *pasta[] = {"- The pasta\n\n\n"};
    return *pasta;
}