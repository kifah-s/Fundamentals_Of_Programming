

/* >>> Program Favorite Foods And The Ingredients ( Version 9 ) <<< */

/* >>> A program prints your favorite foods and the ingredients of each meal <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *fav_food_fun(char *fav[]);

int main()
{
    char *mas[] = {"\n\nYou welcome in Program Favorite Foods And The Ingredients ( Version 9 ) ..\n\n\n"};
    char *wel_mas[] = {wel_mas_fun(mas)};
    printf(*wel_mas);

    char *food[] = {"The favorite foods :\n1 - Pizza\n2 - Pizza\n3 - Pizza\n\n1 - :\n.....\n.....\n.....\n\n2 - :\n.....\n.....\n.....\n\n3 - :\n.....\n.....\n.....\n\n\n"};
    char *fav[] = {fav_food_fun(food)};
    printf(*fav);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Program Favorite Foods And The Ingredients ( Version 9 ) ..\n\n\n"); */

    return *mas;
}

// Printing favorite foods function;
char *fav_food_fun(char *fav[])
{
    /* printf("The favorite foods :\n");
        printf("1 - Pizza\n2 - Pizza\n3 - Pizza\n\n");
        printf("1 - :\n.....\n.....\n.....\n\n2 - :\n.....\n.....\n.....\n\n3 - :\n.....\n.....\n.....\n\n\n"); */

    return *fav;
}