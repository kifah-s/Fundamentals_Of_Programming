

/* >>> Carpenters Program ( Version 6 ) <<< */

/* >>> Carpenters Program : The carpenter uses many nails while making furniture, the carpenter wanted to make some chairs and tables, if the one chair needs 55 nails to make it and the table needs 30 nails.
Required : Write a program that asks a person how many chairs and how many tables he wants to make and prints the total nails he needs. <<< */

#include <stdio.h>

void welMasFun();

int chareNeedFun();
int tableNeedFun();

int screwsNeedFun(int chare, int table);

int main()
{
    welMasFun();
    
    int chare = chareNeedFun();
    int table = tableNeedFun();
    
    screwsNeedFun(chare, table);

    return 0;
}

// Fuctions.
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Carpenters Program ( Version 6 ) ..\n\n");
}

// Char need function;
int chareNeedFun()
{
    int chare;
    printf("How mane chare yuo need ? ");
    scanf("%d", &chare);
    return chare * 25;
}

// Table need function;
int tableNeedFun()
{
    int table;
    printf("How mane table yuo need ? ");
    scanf("%d", &table);
    return table * 30;
}

// Screws need function;
int screwsNeedFun(int chare, int table)
{
    int screws = chare + table;
    printf("\nThe number of screws you need : %d\n\n\n", screws);
}