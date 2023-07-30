

/* >>> Supermarket Program ( Version 4 ) <<< */

/* >>> Supermarket Program : When Rowan shopped, she had a list of products she wanted to buy, and she would buy different quantities of these products, she wanted to calculate the total amount required to buy the products.
Required : Write a program that records the prices of 5 products, then the user asks how much of each product he wants and prints the total amount at the end.. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Supermarket Program ( Version 4 ) ..\n\n");

    int apples = 10, banana = 15, carrot = 5, lettuce = 2, tomatoes = 8;
    int r_apples, r_banana, r_carrot, r_lettuce, r_tomatoes;
    int t_apples, t_banana, t_carrot, t_lettuce, t_tomatoes;
    int total;

    printf("Enter The required amount of product : ");
    scanf("%d%*c%d%*c%d%*c%d%*c%d", &r_apples, &r_banana, &r_carrot, &r_lettuce, &r_tomatoes);

    t_apples = apples * r_apples;
    t_banana = banana * r_banana;
    t_carrot = carrot * r_carrot;
    t_lettuce = lettuce * r_lettuce;
    t_tomatoes = tomatoes * r_tomatoes;

    total = t_apples + t_banana + t_carrot + t_lettuce + t_tomatoes;

    printf("\nTotal = %d $\n\n\n", total);

    return 0;
}