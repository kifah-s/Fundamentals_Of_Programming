

/* >>> Film And Series Program ( Version 6 ) <<< */

/* >>> Film And Series Program : On weekly vacation you can spend some time watching your favorite films and series that you haven't seen yet..
Required: Write a program that prints the names of your favorite films and series you want to watch. <<< */

#include <stdio.h>

void *welcome_massage(char massage[]);
void *favorite_films(char favorite_films[]);

int main()
{
    char massage[] = {"\n\nYou welcome in Film And Series Program ( Version 6 ) ..\n\n"};
    welcome_massage(massage);
    char *mas[] = {massage};
    printf(*mas);

    char favorite[] = {"My favorite films and series is :\n"};
    favorite_films(favorite);
    char *fav[] = {favorite};
    printf(*fav);

    char breaking[] = {"\n- Breaking bad\n"};
    favorite_films(breaking);
    char *bre[] = {breaking};
    printf(*bre);

    char attack[] = {"\n- Attack on titan\n\n\n"};
    favorite_films(attack);
    char *att[] = {attack};
    printf(*att);

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