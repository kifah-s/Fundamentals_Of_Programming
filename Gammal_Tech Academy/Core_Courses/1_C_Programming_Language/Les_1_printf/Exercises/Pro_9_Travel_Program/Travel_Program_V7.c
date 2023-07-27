

/* >>> Travel Program ( Version 7 ) <<< */

/* >>> Travel Program : One of the hobbies many people like is to travel to different countries and learn about people's cultures..
Required : Write a program that prints 5 countries you want to travel to. <<< */

#include <stdio.h>

char *wel_mas_fun(char mas[]);
char *tra_fun(char tra[], char fra[], char spa[], char hol[], char ger[], char mal[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Travel Program ( Version 7 ) ..\n\n"};
    wel_mas_fun(mas);
    char *m[] = {mas};
    printf(*m);

    char tra[] = {"I like to travel to the following cities : \n"};
    char fra[] = {"- France\n"};
    char spa[] = {"- Spain\n"};
    char hol[] = {"- Holland\n"};
    char ger[] = {"- Germany\n"};
    char mal[] = {"- The Maldive Islands\n\n\n"};
    tra_fun(tra, fra, spa, hol, ger, mal);
    char *t[] = {tra};
    printf(*t);

    char *f[] = {fra};
    printf(*f);

    char *s[] = {spa};
    printf(*s);

    char *h[] = {hol};
    printf(*h);

    char *g[] = {ger};
    printf(*g);

    char *ma[] = {mal};
    printf(*ma);

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun(char mas[])
{
    /* printf("%s", mas); */
    return mas;
}

// Travel fuction;
char *tra_fun(char tra[], char fra[], char spa[], char hol[], char ger[], char mal[])
{
    /* printf("%s", tra);
    printf("%s", fra);
    printf("%s", spa);
    printf("%s", hol);
    printf("%s", ger);
    printf("%s", mal); */
    return tra, fra, spa, hol, ger, mal;
}