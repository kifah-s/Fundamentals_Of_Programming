

/* >>> Cashier Employee Program ( Version 8 ) <<< */

/* >>> Cashier Employee Program : In any store or supermarket there is a cashier who receives payments from customers, before the appointment to this job the person passes a test to measure whether he qualifies or not, in this test the so-called pal is calculated (deficit) is the difference between the amount received from customers and the actual amount of products. If the deficit is significant, the person is not eligible to work.
Required : Write a program that calculates the deficit if it is, where it records the prices of 5 products and asks the cashier about the quantity of products purchased by customers of these products and the total amount paid.. <<< */

#include <stdio.h>

void welMasFun();

int tenteredToday();
int phoneFun();
int tvFun();
int microwaveFun();
int laptopFun();
int fridgeFun();

int fiscalDeficit();

int main()
{
    welMasFun();
    fiscalDeficit();
    
    return 0;
}

// Function ..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Cashier Employee program ( Version 8 ) ..\n\n");
}

// Tentered Today function;
int tenteredToday()
{
    int tenteredToday;
    printf("Tentered today ? ");
    scanf("%d", &tenteredToday);
    return tenteredToday;
}

// phones function;
int phoneFun()
{
    int phonePrice = 600, purchasedPhone, totalPhone;
    printf("\nThe number of ' phones ' purchased by customers ? ");
    scanf("%d", &purchasedPhone);
    totalPhone = phonePrice * purchasedPhone;
}

// TV function;
int tvFun()
{
    int tvPrice = 700, purchasedTv, totalTv;
    printf("\nThe number of ' TV ' purchased by customers ? ");
    scanf("%d", &purchasedTv);
    totalTv = tvPrice * purchasedTv;
}

// microwave function;
int microwaveFun()
{
    int microwavePrice = 700, purchasedMicrowave, totalMicrowave;
    printf("\nThe number of ' Microwave ' purchased by customers ? ");
    scanf("%d", &purchasedMicrowave);
    totalMicrowave = microwavePrice * purchasedMicrowave;
}

// Laptop function;
int laptopFun()
{
    int laptopPrice = 900, purchasedLaptop, totalLaptop;
    printf("\nThe number of ' laptop ' purchased by customers ? ");
    scanf("%d", &purchasedLaptop);
    totalLaptop = laptopPrice * purchasedLaptop;
}

// Fridge function;
int fridgeFun()
{
    int fridgePrice = 1000, purchasedFridge, totalFridge;
    printf("\nThe number of ' fridge ' purchased by customers ? ");
    scanf("%d", &purchasedFridge);
    totalFridge = fridgePrice * purchasedFridge;
}

int fiscalDeficit()
{
    int fiscalDeficit;
    int tenToday = tenteredToday();
    int totalPhone = phoneFun();
    int totalTv = tvFun();
    int totalMicrowave = microwaveFun();
    int totalLaptop = laptopFun();
    int totalFridge = fridgeFun();

    fiscalDeficit = tenToday - totalPhone - totalTv - totalMicrowave - totalLaptop - totalFridge;
    printf("\nFiscal deficit : %d $\n\n\n", fiscalDeficit);
}