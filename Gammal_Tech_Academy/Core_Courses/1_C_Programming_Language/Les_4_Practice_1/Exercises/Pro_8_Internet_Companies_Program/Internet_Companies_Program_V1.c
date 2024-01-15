

/* >>> Internet Companies Program ( Version 1 ) <<< */

/* >>> Internet Companies Program : Some companies that provide monthly subscription services upon renewal of the subscription migrate the remaining balance in the last month for the new month.
Required : Write a program that asks the person on the monthly subscription balance and on their consumption in the current month of the balance and prints the new month balance. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Internet Companies Program ( Version 1 ) ..\n\n");

    int monthly_subscription,
        quantity_consumed,
        residual,
        new_package;

    printf("Hello Sir.. What is your monthly subscription for internet service ?\n");
    scanf("%d", &monthly_subscription);
    // printf("%d\n", monthly_subscription);

    printf("The quantity consumed ?\n");
    scanf("%d", &quantity_consumed);
    // printf("%d\n", quantity_consumed);

    residual = monthly_subscription - quantity_consumed;
    printf("\nThe residual : %d\n", residual);

    new_package = residual + monthly_subscription;
    printf("The new package : %d\n\n\n", new_package);

    return 0;
}