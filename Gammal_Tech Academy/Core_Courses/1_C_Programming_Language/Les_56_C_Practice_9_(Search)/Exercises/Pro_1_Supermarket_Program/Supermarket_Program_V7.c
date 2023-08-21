

/* >>> Supermarket Program ( Version 7 ) <<< */

/* >>> Supermarket program, some people when going to the supermarket have a specific budget of money, and they have a list of demands, type in a program that asks the user to enter the number of products they want to buy and then enter the name and price of each product in an upward order, Then it enters the budget available, the program prints the names and prices of the largest number of products that the budget will allow to buy and print the amount paid and the rest of the budget. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

struct products
{
    char productName[25];
    int productPrice;
} product[0];

// Functions ..
void welcomeMassageFun();
int numberOfProductsFun(int numberOfProducts);
int getBudgetFun(int budget);
int namesAndPriceProductFun(int numberOfProducts, struct products product[numberOfProducts]);
int numberOfProductsAndBudget(int sum, int numberOfProducts, int budget, struct products product[numberOfProducts]);

int main()
{
    welcomeMassageFun();

    int numberOfProducts = 0, budget = 0, sum = 0;

    numberOfProducts = numberOfProductsFun(numberOfProducts);
    budget = getBudgetFun(budget);

    product[numberOfProducts];
    namesAndPriceProductFun(numberOfProducts, product);

    numberOfProductsAndBudget(sum, numberOfProducts, budget, product);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Supermarket Program ( Version 7 ) ..\n\n");
}

// Get the number of products you want to buy function;
int numberOfProductsFun(int numberOfProducts)
{
    printf("Please enter the number of products you want to buy: ");
    scanf("%d", &numberOfProducts);

    return numberOfProducts;
}

// Get budget function;
int getBudgetFun(int budget)
{
    printf("Please enter your budget: ");
    scanf("%d", &budget);

    return budget;
}

// get names and prices for products function;
int namesAndPriceProductFun(int numberOfProducts, struct products product[numberOfProducts])
{
    printf("\nPlease enter names and price product you want to bay in (ascending order / from The cheapest product to the most expensive product):\n");
    for (int i = 0; i < numberOfProducts; i++)
    {
        printf("Please enter product name %d: ", i + 1);
        scanf("%s", product[i].productName);
        printf("Please enter product price %d: ", i + 1);
        scanf("%d", &product[i].productPrice);
        printf("\n");
    }
}

// The largest number of products that the budget allows to purchase function;
int numberOfProductsAndBudget(int sum, int numberOfProducts, int budget, struct products product[numberOfProducts])
{
    printf("\nThe largest number of products that the budget allows to purchase: \n");
    for (int i = 0; i < numberOfProducts; i++)
    {
        if (budget >= product[i].productPrice)
        {
            budget -= product[i].productPrice;
            sum += product[i].productPrice;
            printf("product %d:\n", i + 1);
            printf("product name: %s\n", product[i].productName);
            printf("product price: %d\n\n", product[i].productPrice);
        }
    }
    printf("Sum products price(The amount paid): %d\n", sum);
    printf("\nThe rest of the budget: %d\n\n", budget);
}