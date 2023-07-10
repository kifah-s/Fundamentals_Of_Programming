

/* >>> Discount Program ( Version 7 ) <<< */

/* >>> On holidays, most people go to buy new clothes, so most shops and shops do discounts on clothes.
   Required : Make a program for a clothing store where it prints the discount value according to the number of pieces purchased by the customer.

   Example :

   If the number of pieces 1 software prints discount = 10%

   If the number of pieces 2 software prints discount = 20%

   If the number of pieces 3 software prints discount = 30%

   If the number of pieces 4 software prints discount = 40%

   If 5 pieces or more software prints discount = 50% <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int discountFun();

int main()
{
    welcomeMassageFun();

    discountFun();

    return 0;
}

// Function..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Discount Program ( Version 7 ) .. \n\n");
}

// Get number Function;
int getNumberFun()
{
    int num;
    printf("Please enter the number of pieces purchased : ");
    scanf("%d", &num);
    return num;
}

// Discount Function;
int discountFun()
{
    int num = getNumberFun();

    if (num == 1)
    {
        printf("\nDiscount = 10%\n\n\n");
    }
    else if (num == 2)
    {
        printf("\nDiscount = 20%\n\n\n");
    }
    else if (num == 3)
    {
        printf("\nDiscount = 30%\n\n\n");
    }
    else if (num == 4)
    {
        printf("\nDiscount = 40%\n\n\n");
    }
    else
    {
        printf("\nDiscount = 50%\n\n\n");
    }
}