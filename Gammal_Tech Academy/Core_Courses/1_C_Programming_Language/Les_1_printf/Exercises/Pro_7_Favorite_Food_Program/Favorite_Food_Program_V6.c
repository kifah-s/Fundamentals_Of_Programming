

/* >>> Favorite Food Program ( Version 6 ) <<< */

/* >>> Favorite Food Program : Even if you eat different types of food, you must have favorite foods..
Required : Write a program that prints 3 of your favorite eaters. <<< */

#include <stdio.h>

void f_welcome_massage(char massage[]);
void f_favorite(char fav_food[]);
void f_protein(char protein[]);
void f_authority(char authority[]);
void f_pasta(char pasta[]);

int main()
{
    char massage[] = {"\n\nYou welcome in Favorite Food Program ( Version 6 ) ..\n\n"};
    f_welcome_massage(massage);

    char fav_food[] = {"My Favorite food is : \n"};
    char protein[] = {"- Food that contains protein\n"};
    char authority[] = {"- Authority\n"};
    char pasta[] = {"- The pasta\n\n\n"};
    f_favorite(fav_food);
    f_protein(protein);
    f_authority(authority);
    f_pasta(pasta);

    return 0;
}

// Function ..
// Welcome massage function;
void f_welcome_massage(char massage[])
{
    printf("%s", massage);
}

// Favorite function;
void f_favorite(char fav_food[])
{
    printf("%s", fav_food);
}
// Protein function;
void f_protein(char protein[])
{
    printf("%s", protein);
}
// Authority function;
void f_authority(char authority[])
{
    printf("%s", authority);
}
// Pasta function;
void f_pasta(char pasta[])
{
    printf("%s", pasta);
}