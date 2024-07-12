

//* Products Program.

//* Write a program that records prices of 5 products, asks the user for the quantity of each product, and prints the total amount.

/*
! Input:
! Enter the price of product 1: 50
! Enter the quantity of product 1: 2

! Enter the price of product 2: 30
! Enter the quantity of product 2: 2

! Enter the price of product 3: 40
! Enter the quantity of product 3: 2

! Enter the price of product 4: 10
! Enter the quantity of product 4: 2

! Enter the price of product 5: 20
! Enter the quantity of product 5: 2

! Output:
! Total amount: 300
*/

#include <stdio.h>

void welcomeMessageFun();
int priceAndQuantityProduct1Fun(int pri, int qua, int tot);
int priceAndQuantityProduct2Fun(int pri, int qua, int tot);
int priceAndQuantityProduct3Fun(int pri, int qua, int tot);
int priceAndQuantityProduct4Fun(int pri, int qua, int tot);
int priceAndQuantityProduct5Fun(int pri, int qua, int tot);
void calculateTotalAmountFun(int totPro1, int totPro2, int totPro3, int totPro4, int totPro5, int totAmo);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int priceProduct1 = 0, priceProduct2 = 0, priceProduct3 = 0, priceProduct4 = 0, priceProduct5 = 0;
    int quantityProduct1 = 0, quantityProduct2 = 0, quantityProduct3 = 0, quantityProduct4 = 0, quantityProduct5 = 0;
    int totalProduct1 = 0, totalProduct2 = 0, totalProduct3 = 0, totalProduct4 = 0, totalProduct5 = 0;
    int totalAmount = 0;

    totalProduct1 = priceAndQuantityProduct1Fun(priceProduct1, quantityProduct1, totalProduct1);
    totalProduct2 = priceAndQuantityProduct2Fun(priceProduct2, quantityProduct2, totalProduct2);
    totalProduct3 = priceAndQuantityProduct3Fun(priceProduct3, quantityProduct3, totalProduct3);
    totalProduct4 = priceAndQuantityProduct4Fun(priceProduct4, quantityProduct4, totalProduct4);
    totalProduct5 = priceAndQuantityProduct5Fun(priceProduct5, quantityProduct5, totalProduct5);
    calculateTotalAmountFun(totalProduct1, totalProduct2, totalProduct3, totalProduct4, totalProduct5, totalAmount);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Products Program ..\n\n");
}

// Getting price and quantity product 1 function.
int priceAndQuantityProduct1Fun(int pri, int qua, int tot)
{
    printf("Please Enter the price of product 1: ");
    scanf("%i", &pri);

    printf("Please Enter the quantity of product 1: ");
    scanf("%i", &qua);

    tot = pri * qua;

    return tot;
}

// Getting price and quantity product 2 function.
int priceAndQuantityProduct2Fun(int pri, int qua, int tot)
{
    printf("\nPlease Enter the price of product 2: ");
    scanf("%i", &pri);

    printf("Please Enter the quantity of product 2: ");
    scanf("%i", &qua);

    tot = pri * qua;

    return tot;
}

// Getting price and quantity product 3 function.
int priceAndQuantityProduct3Fun(int pri, int qua, int tot)
{
    printf("\nPlease Enter the price of product 3: ");
    scanf("%i", &pri);

    printf("Please Enter the quantity of product 3: ");
    scanf("%i", &qua);

    tot = pri * qua;

    return tot;
}

// Getting price and quantity product 4 function.
int priceAndQuantityProduct4Fun(int pri, int qua, int tot)
{
    printf("\nPlease Enter the price of product 4: ");
    scanf("%i", &pri);

    printf("Please Enter the quantity of product 4: ");
    scanf("%i", &qua);

    tot = pri * qua;

    return tot;
}

// Getting price and quantity product 5 function.
int priceAndQuantityProduct5Fun(int pri, int qua, int tot)
{
    printf("\nPlease Enter the price of product 5: ");
    scanf("%i", &pri);

    printf("Please Enter the quantity of product 5: ");
    scanf("%i", &qua);

    tot = pri * qua;

    return tot;
}

// Calculate Total amount Function.
void calculateTotalAmountFun(int totPro1, int totPro2, int totPro3, int totPro4, int totPro5, int totAmo)
{
    totAmo = totPro1 + totPro2 + totPro3 + totPro4 + totPro5;

    printf("\nTotal amount: %i", totAmo);
}

//* End Function ..
