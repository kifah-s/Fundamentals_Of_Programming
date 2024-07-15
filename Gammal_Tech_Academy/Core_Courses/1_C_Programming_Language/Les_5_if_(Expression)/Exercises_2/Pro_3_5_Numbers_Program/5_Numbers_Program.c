

//* 5 Numbers Program.

/*
 * Write a program that asks the user to enter 5 numbers (weights).
 * Calculate their sum. If the sum is more than 500, print "Error, more than 500 kg".
 */

/*
! Input:
! Enter 5 weights ..
! weights 1: 50
! weights 2: 60
! weights 3: 70
! weights 4: 80
! weights 5: 83

! Output:
! Okay.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingWeights1Fun(int wei1);
int gettingWeights2Fun(int wei2);
int gettingWeights3Fun(int wei3);
int gettingWeights4Fun(int wei4);
int gettingWeights5Fun(int wei5);
int calculateWeightsFun(int wie1, int wie2, int wie3, int wie4, int wie5, int sumWei);
void moreThan500OrNotFun(int sumWei);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int weights1 = 0, weights2 = 0, weights3 = 0, weights4 = 0, weights5 = 0, sumWeights = 0;

    weights1 = gettingWeights1Fun(weights1);
    weights2 = gettingWeights2Fun(weights2);
    weights3 = gettingWeights3Fun(weights3);
    weights4 = gettingWeights4Fun(weights4);
    weights5 = gettingWeights5Fun(weights5);
    sumWeights = calculateWeightsFun(weights1, weights2, weights3, weights4, weights5, sumWeights);
    moreThan500OrNotFun(sumWeights);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in 5 Numbers Program ..\n\n");
}

// Getting weights 1 function.
int gettingWeights1Fun(int wei1)
{
    printf("Please enter 5 weights ..\n");
    printf("weights1:  ");
    scanf("%i", &wei1);

    return wei1;
}

// Getting weights 2 function.
int gettingWeights2Fun(int wei2)
{
    printf("weights2:  ");
    scanf("%i", &wei2);

    return wei2;
}

// Getting weights 3 function.
int gettingWeights3Fun(int wei3)
{
    printf("weights3:  ");
    scanf("%i", &wei3);

    return wei3;
}

// Getting weights 4 function.
int gettingWeights4Fun(int wei4)
{
    printf("weights4:  ");
    scanf("%i", &wei4);

    return wei4;
}

// Getting weights 5 function.
int gettingWeights5Fun(int wei5)
{
    printf("weights5:  ");
    scanf("%i", &wei5);

    return wei5;
}

// calculate weights function.
int calculateWeightsFun(int wie1, int wie2, int wie3, int wie4, int wie5, int sumWei)
{
    sumWei = wie1 + wie2 + wie3 + wie4 + wie5;
    return sumWei;
}

// more than 500 or not function.
void moreThan500OrNotFun(int sumWei)
{
    if (sumWei > 500)
    {
        printf("\n\"Error, more than 500 kg\"");
    }
    else
    {
        printf("\n\"Okay.\"");
    }
}
//* End Function ..
