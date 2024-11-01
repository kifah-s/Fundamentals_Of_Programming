

//* Concatenate Brands Program (Version 1).

/*
 * Write a program to concatenate two given brands.
 */

/*
! Input:
! Please enter first brand: Ford
! Please enter second brand: BMW

! Output:
! Concatenated Brands: FordBMW
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void concatenateBrandsFun(char firBra[25], char secBra[25], char conBra[50]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    char firstBrand[25], secondBrand[25], concatenateBrands[50];

    // Call Functions.
    concatenateBrandsFun(firstBrand, secondBrand, concatenateBrands);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Brands Program (Version 1) ..\n\n");
}

// Receive First brand - Function.
void receiveFirstBrandFun(char firBra[25])
{
    printf("Please enter First brand: ");
    scanf("%s", firBra);
}

// Receive Second brand - Function.
void receiveSecondBrandFun(char secBra[25])
{
    printf("Please enter Second brand: ");
    scanf("%s", secBra);
}

// Concatenate Brands - Function.
void concatenateBrandsFun(char firBra[25], char secBra[25], char conBra[50])
{
    receiveFirstBrandFun(firBra);
    receiveSecondBrandFun(secBra);

    conBra = strcat(firBra, secBra);

    printf("\nConcatenated Brands: %s", conBra);
}
//* End Function ..
