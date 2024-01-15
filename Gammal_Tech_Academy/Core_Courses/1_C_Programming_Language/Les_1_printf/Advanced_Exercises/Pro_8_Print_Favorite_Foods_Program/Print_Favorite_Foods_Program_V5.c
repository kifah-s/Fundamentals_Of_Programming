

/* >>> Program Favorite Foods And The Ingredients ( Version 5 ) <<< */

/* >>> A program prints your favorite foods and the ingredients of each meal <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void fav_food_fun(char fav_food1[], char fav_food2[], char fav_food3[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Program Favorite Foods And The Ingredients ( Version 5 ) ..\n\n"};
    wel_mas_fun(mas);

    char fav_food1[] = {"The favorite foods :\n"},
         fav_food2[] = {"1 - Pizza\n2 - Pizza\n3 - Pizza\n\n"},
         fav_food3[] = {"1 - :\n.....\n.....\n.....\n\n2 - :\n.....\n.....\n.....\n\n3 - :\n.....\n.....\n.....\n\n\n"};

    fav_food_fun(fav_food1, fav_food2, fav_food3);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing favorite foods function;
void fav_food_fun(char fav_food1[], char fav_food2[], char fav_food3[])
{
    printf("%s", fav_food1);
    printf("%s", fav_food2);
    printf("%s", fav_food3);
}