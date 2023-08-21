

/* >>> Supermarket Program ( Version 2 ) <<< */

/* >>> Supermarket program, some people when going to the supermarket have a specific budget of money, and they have a list of demands, type in a program that asks the user to enter the number of products they want to buy and then enter the name and price of each product in an upward order, Then it enters the budget available, the program prints the names and prices of the largest number of products that the budget will allow to buy and print the amount paid and the rest of the budget. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int numberOfProductsFun(int numberOfProducts);
int namesAndPriceProductFun(int numberOfProducts, char productName[25][25], int productPrice[25]);
int getBudgetFun(int budget);
int numberOfProductsAndBudget(int sum, int numberOfProducts, int budget, int productPrice[25], char productName[25][25]);

int main()
{
    welcomeMassageFun();

    int numberOfProducts = 0;
    numberOfProducts = numberOfProductsFun(numberOfProducts);

    char productName[25][25];
    int productPrice[25];
    namesAndPriceProductFun(numberOfProducts, productName, productPrice);

    int budget = 0;
    budget = getBudgetFun(budget);

    int sum = 0;
    numberOfProductsAndBudget(sum, numberOfProducts, budget, productPrice, productName);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Supermarket Program ( Version 2 ) ..\n\n");
}

// Get the number of products you want to buy function;
int numberOfProductsFun(int numberOfProducts)
{
    printf("Please enter the number of products you want to buy: ");
    scanf("%d", &numberOfProducts);

    return numberOfProducts;
}

// get names and prices for products function;
int namesAndPriceProductFun(int numberOfProducts, char productName[25][25], int productPrice[25])
{
    printf("\nPlease enter names and price product you want to bay in (ascending order / from The cheapest product to the most expensive product):\n");
    for (int i = 0; i < numberOfProducts; i++)
    {
        printf("Please enter product name %d: ", i + 1);
        scanf("%s", productName[i]);
        printf("Please enter product price %d: ", i + 1);
        scanf("%d", &productPrice[i]);
        printf("\n");
    }
}

// Get budget function;
int getBudgetFun(int budget)
{
    printf("Please enter your budget: ");
    scanf("%d", &budget);

    return budget;
}

// The largest number of products that the budget allows to purchase function;
int numberOfProductsAndBudget(int sum, int numberOfProducts, int budget, int productPrice[25], char productName[25][25])
{
    printf("\nThe largest number of products that the budget allows to purchase: \n");
    for (int i = 0; i < numberOfProducts; i++)
    {
        if (budget >= productPrice[i])
        {
            sum += productPrice[i];
            budget -= productPrice[i];
            printf("product %d:\n", i + 1);
            printf("product name: %s\n", productName[i]);
            printf("product price: %d\n\n", productPrice[i]);
        }
    }
    printf("Sum products price(The amount paid): %d\n", sum);
    printf("\nThe rest of the budget: %d\n\n", budget);
}