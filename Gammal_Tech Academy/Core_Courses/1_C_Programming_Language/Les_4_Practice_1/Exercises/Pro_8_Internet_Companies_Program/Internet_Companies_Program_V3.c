

/* >>> Internet Companies Program ( Version 3 ) <<< */

/* >>> Internet Companies Program : Some companies that provide monthly subscription services upon renewal of the subscription migrate the remaining balance in the last month for the new month.
Required : Write a program that asks the person on the monthly subscription balance and on their consumption in the current month of the balance and prints the new month balance. <<< */

#include <stdio.h>

void welMasFun();

int monthlySubFun();
int quantityConsFun();

int residualFun(int monthlySub, int quantityCons);
int newPacFun();

int main()
{

    welMasFun();
    newPacFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Internet Companies Program ( Version 3 ) ..\n\n");
}

// Monthly subscription function;
int monthlySubFun()
{
    int monthlySub;
    printf("Hello Sir.. What is your monthly subscription for internet service ? ");
    scanf("%d", &monthlySub);
    return monthlySub;
}

// quantity consumed function;
int quantityConsFun()
{
    int quantityCons;
    printf("The quantity consumed ? ");
    scanf("%d", &quantityCons);
    return quantityCons;
}

// residual function;
int residualFun(int monthlySub, int quantityCons)
{
    int residual = monthlySub - quantityCons;
    printf("The residual : %d ", residual);
    return residual;
}

// new package function;
int newPacFun()
{
    int monthlySub = monthlySubFun();
    int quantityCons = quantityConsFun();
    

    int residual = residualFun(monthlySub, quantityCons);

    int newPackage = residual + monthlySub;
    printf("\nThe new package : %d\n\n\n", newPackage);
}