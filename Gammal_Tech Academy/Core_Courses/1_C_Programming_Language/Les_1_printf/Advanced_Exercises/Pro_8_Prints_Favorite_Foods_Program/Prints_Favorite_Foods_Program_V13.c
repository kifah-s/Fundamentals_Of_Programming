

/* >>> Program Favorite Foods And The Ingredients ( Version 13 ) <<< */

/* >>> A program prints your favorite foods and the ingredients of each meal <<< */

#include <stdio.h>

char *wel_mas_fun();
char *fav_food_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    /* printf(*wel_mas); */
    printf("%s", *wel_mas);

    char *food[] = {fav_food_fun()};
    /* printf(*food); */
    printf("%s", *food);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Program Favorite Foods And The Ingredients ( Version 13 ) ..\n\n\n"); */

    char *mas[] = {"\n\nYou welcome in Program Favorite Foods And The Ingredients ( Version 13 ) ..\n\n\n"};

    return *mas;
}

// Printing favorite foods function;
char *fav_food_fun()
{
    /* printf("The favorite foods :\n");
        printf("1 - Pizza\n2 - Pizza\n3 - Pizza\n\n");
        printf("1 - :\n.....\n.....\n.....\n\n2 - :\n.....\n.....\n.....\n\n3 - :\n.....\n.....\n.....\n\n\n"); */

    char *food[] = {"The favorite foods :\n1 - Pizza\n2 - Pizza\n3 - Pizza\n\n1 - :\n.....\n.....\n.....\n\n2 - :\n.....\n.....\n.....\n\n3 - :\n.....\n.....\n.....\n\n\n"};

    return *food;
}