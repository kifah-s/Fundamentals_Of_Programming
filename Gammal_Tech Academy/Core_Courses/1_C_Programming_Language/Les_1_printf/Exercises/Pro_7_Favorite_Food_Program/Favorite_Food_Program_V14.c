

/* >>> Favorite Food Program ( Version 14 ) <<< */

/* >>> Favorite Food Program : Even if you eat different types of food, you must have favorite foods..
Required : Write a program that prints 3 of your favorite eaters. <<< */

#include <stdio.h>

char *f_welcome_massage(char massage[]);
char *f_favorite(char fav_food[]);
char *f_protein(char protein[]);
char *f_authority(char authority[]);
char *f_pasta(char pasta[]);

int main()
{
    char massage[] = {"\n\nYou welcome in Favorite Food Program ( Version 14 ) ..\n\n"};
    f_welcome_massage(massage);
    char *mas[] = {massage};
    /* printf(*mas); */
    printf("%s", *mas);

    char fav_food[] = {"My Favorite food is : \n"};
    f_favorite(fav_food);
    char *fav[] = {fav_food};
    /* printf(*fav); */
    printf("%s", *fav);

    char protein[] = {"- Food that contains protein\n"};
    f_protein(protein);
    char *pro[] = {protein};
    /* printf(*pro); */
    printf("%s", *pro);

    char authority[] = {"- Authority\n"};
    f_authority(authority);
    char *aut[] = {authority};
    /* printf(*aut); */
    printf("%s", *aut);

    char pasta[] = {"- The pasta\n\n\n"};
    f_pasta(pasta);
    char *pas[] = {pasta};
    /* printf(*pas); */
    printf("%s", *pas);

    return 0;
}

// Function ..
// Welcome massage function;
char *f_welcome_massage(char massage[])
{
    /* printf("%s", massage); */
    return massage;
}

// Favorite function;
char *f_favorite(char fav_food[])
{
    /* printf("%s", fav_food); */
    return fav_food;
}
// Protein function;
char *f_protein(char protein[])
{
    /* printf("%s", protein); */
    return protein;
}
// Authority function;
char *f_authority(char authority[])
{
    /* printf("%s", authority); */
    return authority;
}
// Pasta function;
char *f_pasta(char pasta[])
{
    /* printf("%s", pasta); */
    return pasta;
}