

/* >>> Travel Program ( Version 6 ) <<< */

/* >>> Travel Program : One of the hobbies many people like is to travel to different countries and learn about people's cultures..
Required : Write a program that prints 5 countries you want to travel to. <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void tra_fun(char tra[]);
void fra_fun(char fra[]);
void spa_fun(char spa[]);
void hol_fun(char hol[]);
void ger_fun(char ger[]);
void mal_fun(char mal[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Travel Program ( Version 6 ) ..\n\n"};
    wel_mas_fun(mas);

    char tra[] = {"I like to travel to the following cities : \n"};
    char fra[] = {"- France\n"};
    char spa[] = {"- Spain\n"};
    char hol[] = {"- Holland\n"};
    char ger[] = {"- Germany\n"};
    char mal[] = {"- The Maldive Islands\n\n\n"};
    tra_fun(tra);
    fra_fun(fra);
    spa_fun(spa);
    hol_fun(hol);
    ger_fun(ger);
    mal_fun(mal);

    return 0;
}

// Function ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Travel fuction;
void tra_fun(char tra[])
{
    printf("%s", tra);
}
// fra fuction;
void fra_fun(char fra[])
{
    printf("%s", fra);
}
// spa fuction;
void spa_fun(char spa[])
{
    printf("%s", spa);
}
// hol fuction;
void hol_fun(char hol[])
{
    printf("%s", hol);
}
// ger fuction;
void ger_fun(char ger[])
{
    printf("%s", ger);
}
// mal fuction;
void mal_fun(char mal[])
{
    printf("%s", mal);
}