#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

short FindNumberAlgorithm1(short arr1[10], short Number)
{
    int n = 10;
    short pos = -1;

    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            pos = i;
        }
    }

    return pos;
}

short FindNumberAlgorithm2(short arr1[10], short Number)
{
    int n = 10;

    for (int i = 0; i <= n; i++)
    {
        if (arr1[i] == Number)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    WelcomeMessage();

    short arr1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << FindNumberAlgorithm1(arr1, 30) << endl;
    cout << FindNumberAlgorithm2(arr1, 30) << endl;

    cout << endl
         << endl;

    return 0;
}