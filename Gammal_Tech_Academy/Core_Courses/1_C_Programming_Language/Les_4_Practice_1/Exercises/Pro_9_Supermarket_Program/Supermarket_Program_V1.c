

/* >>> Supermarket Program ( Version 1 ) <<< */

/* >>> Supermarket Program : When Rowan shopped, she had a list of products she wanted to buy, and she would buy different quantities of these products, she wanted to calculate the total amount required to buy the products.
Required : Write a program that records the prices of 5 products, then the user asks how much of each product he wants and prints the total amount at the end.. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Supermarket Program ( Version 1 ) ..\n\n");

    int apples = 10, banana = 15, carrot = 5, lettuce = 2, tomatoes = 8;
    int r_apples, r_banana, r_carrot, r_lettuce, r_tomatoes;
    int total;

    printf("Enter The required amount of apples : ");
    scanf("%d", &r_apples);

    printf("Enter The required amount of banana : ");
    scanf("%d", &r_banana);

    printf("Enter The required amount of carrot : ");
    scanf("%d", &r_carrot);

    printf("Enter The required amount of lettuce : ");
    scanf("%d", &r_lettuce);

    printf("Enter The required amount of tomatoes : ");
    scanf("%d", &r_tomatoes);

    total = (apples * r_apples) + (banana * r_banana) + (carrot * r_carrot) + (lettuce * r_lettuce) + (tomatoes * r_tomatoes);

    printf("\nTotal = %d $\n\n\n", total);

    return 0;
}