#pragma once

#include <iostream>
using namespace std;

namespace MyInputLibrary
{
    int ReadNumber()
    {
        int number = 0;

        cout << "Please, enter a number: ";
        cin >> number;

        return number;
    }
}