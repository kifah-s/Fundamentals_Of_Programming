#include <iostream>
#include <iomanip>

#include "Classes/Currency/clsCurrency.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

static void _PrintCurrency(clsCurrency Currency)
{
    cout << "\nCurrency Card:\n";
    cout << "_____________________________\n";
    cout << "\nCountry    : " << Currency.GetCountry();
    cout << "\nCode       : " << Currency.GetCurrencyCode();
    cout << "\nName       : " << Currency.GetCurrencyName();
    cout << "\nRate(1$) = : " << Currency.GetRate();

    cout << "\n_____________________________\n";
}

int main()
{
    WelcomeMessage();

    clsCurrency Currency1 = Currency1.FindByCode("jod");

    if (Currency1.IsEmpty())
    {
        cout << "\nCurrency Is Not Found!\n";
    }
    else
    {
        _PrintCurrency(Currency1);
    }

    clsCurrency Currency2 = Currency2.FindByCountry("Egypt");

    if (Currency2.IsEmpty())
    {
        cout << "\nCurrency Is Not Found!\n";
    }
    else
    {
        _PrintCurrency(Currency2);
    }

    cout << "\nCurrency 1 after updating Rate:\n";
    Currency1.UpdateRate(0.77);
    _PrintCurrency(Currency1);

    cout << endl
         << endl;

    return 0;
}