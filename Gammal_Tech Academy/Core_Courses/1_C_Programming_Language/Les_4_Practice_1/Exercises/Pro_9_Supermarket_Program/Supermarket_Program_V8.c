

/* >>> Supermarket Program ( Version 8 ) <<< */

/* >>> Supermarket Program : When Rowan shopped, she had a list of products she wanted to buy, and she would buy different quantities of these products, she wanted to calculate the total amount required to buy the products.
Required : Write a program that records the prices of 5 products, then the user asks how much of each product he wants and prints the total amount at the end.. <<< */

#include <stdio.h>

void welMasFun();

int applesFun();
int bananaFun();
int carrotFun();
int lettuceFun();
int tomatoesFun();

int totalPriceFun();

int main()
{
    welMasFun();

    totalPriceFun();

    return 0;
}

// Functions..
// welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Supermarket Program ( Version 8 ) ..\n\n");
}

// apples function;
int applesFun()
{
    int applesPrice = 10,
        requiredApples,
        total;
    printf("Enter The required amount of Apples : ");
    scanf("%d", &requiredApples);
    total = applesPrice * requiredApples;
    return total;
}

// Banana function;
int bananaFun()
{
    int bananaPrice = 10,
        requiredBanana,
        total;
    printf("Enter The required amount of Banana : ");
    scanf("%d", &requiredBanana);
    total = bananaPrice * requiredBanana;
    return total;
}

// Carrot function;
int carrotFun()
{
    int carrotPrice = 10,
        requiredCarrot,
        total;
    printf("Enter The required amount of Carrot : ");
    scanf("%d", &requiredCarrot);
    total = carrotPrice * requiredCarrot;
    return total;
}

// Lettuce function;
int lettuceFun()
{
    int lettucePrice = 10,
        requiredLettuce,
        total;
    printf("Enter The required amount of Lettuce : ");
    scanf("%d", &requiredLettuce);
    total = lettucePrice * requiredLettuce;
    return total;
}

// Tomatoes function;
int tomatoesFun()
{
    int tomatoesPrice = 10,
        requiredTomatoes,
        total;
    printf("Enter The required amount of Tomatoes : ");
    scanf("%d", &requiredTomatoes);
    total = tomatoesPrice * requiredTomatoes;
    return total;
}

// Total price function;
int totalPriceFun()
{
    int apples = applesFun();
    int banana = bananaFun();
    int carrot = carrotFun();
    int lettuce = lettuceFun();
    int tomatoes = tomatoesFun();

    int totalPrice = apples + banana + carrot + lettuce + tomatoes;

    printf("\nTotal = %d $\n\n\n", totalPrice);
}