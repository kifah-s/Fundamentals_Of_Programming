#include <iostream>

using namespace std;

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float ReadTotalSalesFun()
{
    float totSal = 0;
    cout << "Please, enter total sales: ";
    cin >> totSal;

    return totSal;
}

float CalculateCommissionFun(float totSal)
{
    float comm = 0;
    if (totSal > 1000000)
    {
        comm = totSal * 0.01;
    }
    else if (totSal > 500000 && totSal <= 1000000)
    {
        comm = totSal * 0.02;
    }
    else if (totSal > 100000 && totSal <= 500000)
    {
        comm = totSal * 0.03;
    }
    else if (totSal > 50000 && totSal <= 100000)
    {
        comm = totSal * 0.04;
    }
    else
    {
        comm = totSal * 0;
    }

    return comm;
}

void PrintCommissionFun(float comm)
{
    cout << "Commission: " << comm << endl;
}
//* End Functions

int main()
{
    WelcomeMessageFun();
    PrintCommissionFun(CalculateCommissionFun(ReadTotalSalesFun()));

    cout << endl
         << endl;

    return 0;
}