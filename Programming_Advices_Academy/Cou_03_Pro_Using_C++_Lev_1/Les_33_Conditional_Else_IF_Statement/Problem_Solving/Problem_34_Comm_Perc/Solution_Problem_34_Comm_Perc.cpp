#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    float totalSales = 0, percentage = 0;

    cout << "Please, enter total sales: ";
    cin >> totalSales;

    if (totalSales >= 1000000)
    {
        percentage = totalSales * 0.01;
        cout << "\nPercentage: " << percentage << endl;
    }
    else if (totalSales >= 500000 && totalSales < 1000000)
    {
        percentage = totalSales * 0.02;
        cout << "\nPercentage: " << percentage << endl;
    }
    else if (totalSales >= 100000 && totalSales < 500000)
    {
        percentage = totalSales * 0.03;
        cout << "\nPercentage: " << percentage << endl;
    }
    else if (totalSales >= 50000 && totalSales < 100000)
    {
        percentage = totalSales * 0.5;
        cout << "\nPercentage: " << percentage << endl;
    }
    else
    {
        cout << "\nPercentage: " << percentage << endl;
    }

    cout << endl
         << endl;

    return 0;
}