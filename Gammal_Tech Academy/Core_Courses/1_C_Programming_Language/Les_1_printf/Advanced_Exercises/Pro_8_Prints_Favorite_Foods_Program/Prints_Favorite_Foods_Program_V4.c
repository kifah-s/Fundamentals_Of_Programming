

/* >>> Program Favorite Foods And The Ingredients ( Version 4 ) <<< */

/* >>> A program prints your favorite foods and the ingredients of each meal <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void fav_food_fun(char fav_food1[], char fav_food2[], char fav_food3[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Program Favorite Foods And The Ingredients ( Version 4 ) ..\n\n");

    fav_food_fun("The favorite foods :\n", "1 - Pizza\n2 - Pizza\n3 - Pizza\n\n", "1 - :\n.....\n.....\n.....\n\n2 - :\n.....\n.....\n.....\n\n3 - :\n.....\n.....\n.....\n\n\n");

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing triangle function;
void fav_food_fun(char fav_food1[], char fav_food2[], char fav_food3[])
{
    printf("%s", fav_food1);
    printf("%s", fav_food2);
    printf("%s", fav_food3);
}