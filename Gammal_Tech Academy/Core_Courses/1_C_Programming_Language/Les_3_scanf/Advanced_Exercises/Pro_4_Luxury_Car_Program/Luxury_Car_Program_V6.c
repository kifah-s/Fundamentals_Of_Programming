

/* >>> Luxury Car Programme ( Version 6 ) <<< */

/* >>> Each of us dreams of owning many luxurious cars.
Required : A program that asks the user how many cars he owns now and how many cars he wants, then prints the rest of the cars for him. <<< */

#include <stdio.h>

void welMasFun();

int carHaveFun();
int carNeedFun();

int resultFun(int carHave, int carNeed);

int main()
{
    welMasFun();

    /* int carHave = carHaveFun();
        int carNeed = carNeedFun(); */

    resultFun(carHaveFun(), carNeedFun());

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Luxury Car Programme ( Version 6 ) ..\n\n");
}

// Car have function;
int carHaveFun()
{
    int carHave;
    printf("The number of cars you Have : ");
    scanf("%d", &carHave);
    return carHave;
}

// Car need function;
int carNeedFun()
{
    int carNeed;
    printf("The number of cars you need : ");
    scanf("%d", &carNeed);
    return carNeed;
}

// Result function;
int resultFun(int carHave, int carNeed)
{
    int result;
    result = carNeed - carHave;
    printf("\nResidual : %d\n\n\n", result);
}