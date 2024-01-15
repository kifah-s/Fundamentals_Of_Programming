

/* >>> Film And Series Program ( Version 12 ) <<< */

/* >>> Film And Series Program : On weekly vacation you can spend some time watching your favorite films and series that you haven't seen yet..
Required: Write a program that prints the names of your favorite films and series you want to watch. <<< */

#include <stdio.h>

void *welcome_massage(char massage[]);
void *favorite_films(char favorite_films[]);

int main()
{
    char massage[] = {"\n\nYou welcome in Film And Series Program ( Version 12 ) ..\n\n"};
    char *mas[] = {welcome_massage(massage)};
    /* printf(*mas); */
    printf("%s", *mas);

    char favorite[] = {"My favorite films and series is :\n"};
    char *fav[] = {favorite_films(favorite)};
    /* printf(*fav); */
    printf("%s", *fav);

    char breaking[] = {"\n- Breaking bad\n"};
    char *bre[] = {favorite_films(breaking)};
    /* printf(*bre); */
    printf("%s", *bre);

    char attack[] = {"\n- Attack on titan\n\n\n"};
    char *att[] = {favorite_films(attack)};
    /* printf(*att); */
    printf("%s", *att);

    return 0;
}

// Welcome massage function;
void *welcome_massage(char massage[])
{
    /* printf("\n\n%s\n\n", massage); */
    return massage;
}

// favorite films function;
void *favorite_films(char favorite_films[])
{
    /* printf("\n%s\n\n", favorite_films); */
    return favorite_films;
}