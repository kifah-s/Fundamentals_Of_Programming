#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string NumberToText(int number)
{
    if (number == 0)
    {
        return "";
    }

    if (number >= 1 && number <= 19)
    {
        string arr[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        
        return arr[number] + " ";
    }

    if (number >= 20 && number <= 99)
    {
        string arr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        
        return arr[number / 10] + " " + NumberToText(number % 10);
    }

    if (number >= 100 && number <= 199)
    {
        return "One Hundred " + NumberToText(number % 100);
    }

    if (number >= 200 && number <= 999)
    {
        return NumberToText(number / 100) + "Hundreds " + NumberToText(number % 100);
    }

    if (number >= 1000 && number <= 1999)
    {
        return "One Thousand " + NumberToText(number % 1000);
    }

    if (number >= 2000 && number <= 999999)
    {
        return NumberToText(number / 1000) + "Thousands " + NumberToText(number % 1000);
    }

    if (number >= 1000000 && number <= 1999999)
    {
        return "One Million " + NumberToText(number % 1000000);
    }

    if (number >= 2000000 && number <= 999999999)
    {
        return NumberToText(number / 1000000) + "Millions " + NumberToText(number % 1000000);
    }

    if (number >= 1000000000 && number <= 1999999999)
    {
        return "One Billion " + NumberToText(number % 1000000000);
    }

    else
    {
        return NumberToText(number / 1000000000) + "Billions " + NumberToText(number % 1000000000);
    }
}

int ReadNumber()
{
    int number = 0;

    cout << "Please, Enter a number: ";
    cin >> number;

    return number;
}

int main()
{
    WelcomeMessage();

    int number = ReadNumber();
    cout << NumberToText(number);

    cout << endl
         << endl;

    return 0;
}