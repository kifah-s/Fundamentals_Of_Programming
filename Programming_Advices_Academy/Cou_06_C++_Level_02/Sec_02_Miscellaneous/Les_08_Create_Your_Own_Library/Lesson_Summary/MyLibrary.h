#pragma once

#include <iostream>
using namespace std;

namespace MyLibrary
{
    void Test()
    {
        cout << "Hi, this is my first function in my first library." << endl;
    }

    int SumTowNumbers(int num1, int num2)
    {
        return num1 + num2;
    }
}