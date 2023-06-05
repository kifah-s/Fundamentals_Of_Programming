

/* >>> Program Favorite Foods And The Ingredients ( Version 3 ) <<< */

/* >>> A program prints your favorite foods and the ingredients of each meal <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void fav_food_fun(char fav_food[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Program Favorite Foods And The Ingredients ( Version 3 ) ..\n\n\n");

    fav_food_fun("The favorite foods :\n");
    fav_food_fun("1 - Pizza\n2 - Pizza\n3 - Pizza\n\n");
    fav_food_fun("1 - :\n.....\n.....\n.....\n\n2 - :\n.....\n.....\n.....\n\n3 - :\n.....\n.....\n.....\n\n\n");
    

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing favorite foods function;
void fav_food_fun(char fav_food[])
{
    printf("%s", fav_food);
}