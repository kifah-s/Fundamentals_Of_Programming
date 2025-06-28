#include <iostream>

using namespace std;

//* Struct

struct stBillInformation
{
    float totalBill = 0;
    float cashPaid = 0;
    float remainder = 0;
};

//* End Struct

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stBillInformation ReadBillInformationFun()
{
    stBillInformation billInfo;

    cout << "Please, enter Total Bill: ";
    cin >> billInfo.totalBill;

    cout << "Please, enter Cash Paid: ";
    cin >> billInfo.cashPaid;

    return billInfo;
}

stBillInformation CalculateRemainderFun()
{
    stBillInformation billInfo = ReadBillInformationFun();

    billInfo.remainder =  billInfo.cashPaid - billInfo.totalBill;

    return billInfo;
}

void PrintResultFun(stBillInformation billInfo)
{
    cout << "\nTotal Bill: " << billInfo.totalBill << endl;
    cout << "Cash Paid: " << billInfo.cashPaid << endl;
    cout << "Remainder: " << billInfo.remainder << endl;
}

//* End Functions

int main()
{
    WelcomeMessageFun();
    PrintResultFun(CalculateRemainderFun());

    cout << endl
         << endl;

    return 0;
}