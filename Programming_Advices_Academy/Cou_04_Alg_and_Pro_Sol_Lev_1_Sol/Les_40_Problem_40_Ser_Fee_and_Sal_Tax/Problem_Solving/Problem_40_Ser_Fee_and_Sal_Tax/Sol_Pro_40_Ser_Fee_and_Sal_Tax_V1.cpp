#include <iostream>

using namespace std;

//* Structs

struct stBillInformations
{
    float servicesFee = 0;
    float salesTax = 0;
    float billValue = 0;
    float totalBill = 0;
};

//* End Structs

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float ReadBillValueFun()
{
    float billVal = 0;

    cout << "Please, enter a bill value: ";
    cin >> billVal;

    return billVal;
}

float CalculateServicesFeeFun(float billVal)
{
    return billVal * 0.10;
}

float CalculateSalesTaxFun(float billVal, float serFee)
{
    return (billVal + serFee) * 0.16;
}

float CalculateTotalBillFun(float billVal, float serFee, float salTax)
{
    return billVal + serFee + salTax;
}

void PrintResultFun()
{
    stBillInformations billInfo;

    billInfo.billValue = ReadBillValueFun();
    billInfo.servicesFee = CalculateServicesFeeFun(billInfo.billValue);
    billInfo.salesTax = CalculateSalesTaxFun(billInfo.billValue, billInfo.servicesFee);
    billInfo.totalBill = CalculateTotalBillFun(billInfo.billValue, billInfo.servicesFee, billInfo.salesTax);

    cout << "\nBill Value: " << billInfo.billValue << endl;
    cout << "Services Fee: " << billInfo.servicesFee << endl;
    cout << "Sales Tax: " << billInfo.salesTax << endl;
    cout << "Total Bill: " << billInfo.totalBill << endl;
}

//* End Functions

int main()
{
    WelcomeMessageFun();
    PrintResultFun();

    cout << endl
         << endl;

    return 0;
}