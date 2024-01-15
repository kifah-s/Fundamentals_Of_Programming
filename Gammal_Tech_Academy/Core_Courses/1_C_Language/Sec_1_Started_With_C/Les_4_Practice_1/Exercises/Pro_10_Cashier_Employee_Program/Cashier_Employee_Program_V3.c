

/* >>> Cashier Employee Program ( Version 3 ) <<< */

/* >>> Cashier Employee Program : In any store or supermarket there is a cashier who receives payments from customers, before the appointment to this job the person passes a test to measure whether he qualifies or not, in this test the so-called pal is calculated (deficit) is the difference between the amount received from customers and the actual amount of products. If the deficit is significant, the person is not eligible to work.
Required : Write a program that calculates the deficit if it is, where it records the prices of 5 products and asks the cashier about the quantity of products purchased by customers of these products and the total amount paid.. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Cashier Employee program ( Version 3 ) ..\n\n");

    int tentered_today, fiscal_deficit;
    int phone = 600, tv = 700, microwave = 800, laptop = 900, fridge = 1000;
    int s_phone, s_tv, s_microwave, s_laptop, s_fridge;
    int t_phone, t_tv, t_microwave, t_laptop, t_fridge;

    printf("Tentered_today ? ");
    scanf("%d", &tentered_today);

    printf("\nThe number of ' phones ' purchased by customers ? ");
    scanf("%d", &s_phone);
    t_phone = phone * s_phone;

    printf("The number of ' tv ' purchased by customers ? ");
    scanf("%d", &s_tv);
    t_tv = tv * s_tv;

    printf("The number of ' microwave ' purchased by customers ? ");
    scanf("%d", &s_microwave);
    t_microwave = microwave * s_microwave;

    printf("The number of ' laptop ' purchased by customers ? ");
    scanf("%d", &s_laptop);
    t_laptop = laptop * s_laptop;

    printf("The number of ' fridge ' purchased by customers ? ");
    scanf("%d", &s_fridge);
    t_fridge = fridge * s_fridge;

    fiscal_deficit = tentered_today - t_phone - t_tv - t_microwave - t_laptop - t_fridge;
    printf("\nFiscal deficit : %d $\n\n\n", fiscal_deficit);

    return 0;
}