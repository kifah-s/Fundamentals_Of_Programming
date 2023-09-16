

/* >>> Project 4 ( Billing System ) <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Global Variables ..
// User Info :
char name[25];
char number[25];
// End Global Variables ..

// Global Variables ..
// Products:
int sugar = 15;
int rice = 25;
int oil = 40;
int spaghetti = 20;
int juice = 10;
// ----------------------
int apples = 15;
int bananas = 15;
int strawberries = 15;
int pineapples = 15;
int mangos = 15;
// End Global Variables ..

// Global Variables ..
int billingNumber = 0;
double total = 0;
double discount = 0.95;
// End Global Variables ..

// Functions ..
void welcomeMassageFun();
void productsViewScreenFun();

// End Functions ..

int main()
{
    welcomeMassageFun();

    productsViewScreenFun();

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Project 4 ( Billing System ) ..\n\n");
}

// Products view screen  / Function.
void productsViewScreenFun()
{
    printf("***************** Products *****************\n");
    printf("Pro-Number        Pro-Name         Pro-Price\n");
    printf("1)                  sugar               15 $\n");
    printf("2)                  rice                15 $\n");
    printf("3)                  oil                 15 $\n");
    printf("4)                  spaghetti           15 $\n");
    printf("5)                  juice               15 $\n");
    printf("6)                  apples              15 $\n");
    printf("7)                  bananas             15 $\n");
    printf("8)                  strawberries        15 $\n");
    printf("9)                  pineapples          15 $\n");
    printf("10)                 mangos              15 $\n");
    printf("********************************************\n");
}

// End Functions ..
