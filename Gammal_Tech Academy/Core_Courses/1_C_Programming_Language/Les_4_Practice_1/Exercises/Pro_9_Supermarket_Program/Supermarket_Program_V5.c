

/* >>> Supermarket Program ( Version 5 ) <<< */

/* >>> Supermarket Program : When Rowan shopped, she had a list of products she wanted to buy, and she would buy different quantities of these products, she wanted to calculate the total amount required to buy the products.
Required : Write a program that records the prices of 5 products, then the user asks how much of each product he wants and prints the total amount at the end.. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Supermarket Program ( Version 5 ) ..\n\n");

    int apples = 10, banana = 15, carrot = 5, lettuce = 2, tomatoes = 8;
    int r_apples, r_banana, r_carrot, r_lettuce, r_tomatoes;
    int t_apples, t_banana, t_carrot, t_lettuce, t_tomatoes;
    int total;

    printf("Enter The required amount of apples : ");
    scanf("%d", &r_apples);
    t_apples = apples * r_apples;
    // printf("%d\n", t_apples);

    printf("Enter The required amount of banana : ");
    scanf("%d", &r_banana);
    t_banana = banana * r_banana;
    // printf("%d\n", t_banana);

    printf("Enter The required amount of carrot : ");
    scanf("%d", &r_carrot);
    t_carrot = carrot * r_carrot;
    // printf("%d\n", t_carrot);

    printf("Enter The required amount of lettuce : ");
    scanf("%d", &r_lettuce);
    t_lettuce = lettuce * r_lettuce;
    // printf("%d\n", t_lettuce);

    printf("Enter The required amount of tomatoes : ");
    scanf("%d", &r_tomatoes);
    t_tomatoes = tomatoes * r_tomatoes;
    // printf("%d\n", t_tomatoes);

    total = t_apples + t_banana + t_carrot + t_lettuce + t_tomatoes;

    printf("\nProduct        Prise       Required quantity     Total\n\n");

    printf("Apples           %d                 %d               %d\n", apples, r_apples, t_apples);
    printf("Banana           %d                 %d               %d\n", banana, r_banana, t_banana);
    printf("Carrot            %d                 %d               %d\n", carrot, r_carrot, t_carrot);
    printf("Lettuce           %d                 %d               %d\n", lettuce, r_lettuce, t_lettuce);
    printf("Tomatoes          %d                 %d               %d\n", tomatoes, r_tomatoes, t_tomatoes);
    printf("\nTotal                                               %d $\n\n\n", total);

    return 0;
}