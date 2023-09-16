

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
int bananas = 20;
int strawberries = 25;
int pineapples = 35;
int mangos = 50;
// End Global Variables ..

// Global Variables ..
int billingNumber = 0;
double total = 0;
double discount = 0.95;
// End Global Variables ..

// Functions ..
void welcomeMassageFun();
void productsViewScreenFun();
int buyingFun();

// End Functions ..

int main()
{
    welcomeMassageFun();

    productsViewScreenFun();
    buyingFun();

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
    printf("2)                  rice                25 $\n");
    printf("3)                  oil                 40 $\n");
    printf("4)                  spaghetti           20 $\n");
    printf("5)                  juice               10 $\n");
    printf("6)                  apples              15 $\n");
    printf("7)                  bananas             20 $\n");
    printf("8)                  strawberries        25 $\n");
    printf("9)                  pineapples          35 $\n");
    printf("10)                 mangos              50 $\n");
    printf("********************************************\n");
}

// Buying / Function.
int buyingFun()
{
    while (true)
    {
        int x = 0;
        printf("Please enter product number you need buying OR enter \"0\" for Exit: ");
        scanf("%d", &x);

        switch (x)
        {
        case 0:
            printf("Total = %lf", total);
            return 0;
            break;

        case 1:
            total += sugar;
            break;

        case 2:
            total += rice;
            break;

        case 3:
            total += oil;
            break;

        case 4:
            total += spaghetti;
            break;

        case 5:
            total += juice;
            break;

        case 6:
            total += apples;
            break;

        case 7:
            total += bananas;
            break;

        case 8:
            total += strawberries;
            break;

        case 9:
            total += pineapples;
            break;

        case 10:
            total += mangos;
            break;
        }
    }
}

// End Functions ..
