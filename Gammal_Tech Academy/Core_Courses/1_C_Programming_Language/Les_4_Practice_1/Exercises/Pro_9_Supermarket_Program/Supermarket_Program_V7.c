

/* >>> Supermarket Program ( Version 7 ) <<< */

/* >>> Supermarket Program : When Rowan shopped, she had a list of products she wanted to buy, and she would buy different quantities of these products, she wanted to calculate the total amount required to buy the products.
Required : Write a program that records the prices of 5 products, then the user asks how much of each product he wants and prints the total amount at the end.. <<< */

#include <stdio.h>

void welMasFun();

int applesFun();
int bananaFun();
int carrotFun();
int lettuceFun();
int tomatoesFun();

int totalPriceFun(int apples, int banana, int carrot, int lettuce, int tomatoes);

int main()
{
    welMasFun();

    int apples = applesFun();
    int banana = bananaFun();
    int carrot = carrotFun();
    int lettuce = lettuceFun();
    int tomatoes = tomatoesFun();

    totalPriceFun(apples, banana, carrot, lettuce, tomatoes);

    return 0;
}

// Functions..
// welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Supermarket Program ( Version 7 ) ..\n\n");
}

// apples function;
int applesFun()
{
    int requiredApples;
    printf("Enter The required amount of Apples : ");
    scanf("%d", &requiredApples);
    return requiredApples;
}

// Banana function;
int bananaFun()
{
    int requiredBanana;
    printf("Enter The required amount of Banana : ");
    scanf("%d", &requiredBanana);
    return requiredBanana;
}

// Carrot function;
int carrotFun()
{
    int requiredCarrot;
    printf("Enter The required amount of Carrot : ");
    scanf("%d", &requiredCarrot);
    return requiredCarrot;
}

// Lettuce function;
int lettuceFun()
{
    int requiredLettuce;
    printf("Enter The required amount of Lettuce : ");
    scanf("%d", &requiredLettuce);
    return requiredLettuce;
}

// Tomatoes function;
int tomatoesFun()
{

    int requiredTomatoes;
    printf("Enter The required amount of Tomatoes : ");
    scanf("%d", &requiredTomatoes);
    return requiredTomatoes;
}

// Total price function;
int totalPriceFun(int apples, int banana, int carrot, int lettuce, int tomatoes)
{
    int applesPrice = 10, bananaPrice = 10, carrotPrice = 10, lettucePrice = 10, tomatoesPrice = 10;

    apples = apples * applesPrice;
    banana = banana * bananaPrice;
    carrot = carrot * carrotPrice;
    lettuce = lettuce * lettucePrice;
    tomatoes = tomatoes * tomatoesPrice;

    int totalPrice = apples + banana + carrot + lettuce + tomatoes;

    printf("\nTotal = %d $\n\n\n", totalPrice);
}