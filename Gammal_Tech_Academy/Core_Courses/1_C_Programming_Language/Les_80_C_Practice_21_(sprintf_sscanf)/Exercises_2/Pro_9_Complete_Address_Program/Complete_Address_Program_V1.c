

//* Complete Address Program (Version 1).

/*
* Ask the user for their street, city, and country, then create and print their complete address.

! Input:
! Please enter your Street: MainStreet
! Please enter your City: BigCity
! Please enter your Country: WonderLand

! Output:
! Complete Address: MainStreet, BigCity, WonderLand
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char comAdd[], char str[], char cit[], char cou[]);

int main()
{
    // Declare Variables.
    char completeAddress[100], street[25], city[25], country[25];

    // Call Functions.
    resultFun( completeAddress,  street,  city,  country);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Complete Address Program (Version 1) ..\n\n");
}

// Git Street - Function.
void gitStreetFun(char str[])
{
    printf("Please enter your Street: ");
    scanf("%s", str);
}

// Git City - Function.
void gitCityFun(char cit[])
{
    printf("Please enter your City: ");
    scanf("%s", cit);
}

// Git Country - Function.
void gitCountryFun(char cou[])
{
    printf("Please enter your Country: ");
    scanf("%s", cou);
}

// Complete Address - Function.
void completeAddressFun(char comAdd[], char str[], char cit[], char cou[])
{
    sprintf(comAdd, "Complete Address: %s, %s, %s", str, cit, cou);
}

// Result - Function.
void resultFun(char comAdd[], char str[], char cit[], char cou[])
{
    printWelcomeMessageFun();
    gitStreetFun(str);
    gitCityFun(cit);
    gitCountryFun(cou);
    completeAddressFun(comAdd, str, cit, cou);

    printf("\n%s\n\n", comAdd);
}
//* End Function ..
