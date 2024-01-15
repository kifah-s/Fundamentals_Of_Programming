
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << endl
         << "Lesson Summary.." << endl
         << endl;
}

// Recursion / Function.
void recursionFun(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        cout << x << " ";
        recursionFun(x - 1);
    }
}

// Recursion / Function 2.
void recursionFun_2(int x)
{
    if (x == 0)
    {
        return;
    }

    cout << x << " ";
    recursionFun_2(x - 1);
}

// Recursion / Function 3.
void recursionFun_3(int x)
{
    if (x == 0)
    {
        return;
    }

    recursionFun_3(x - 1);
    cout << x << " ";
}

//* End Functions ..

int main()
{
    lessonSummaryFun();

    /*
    int number = 0;
    cout << "Please enter a number: ";
    cin >> number;

    clock_t start = clock();

    for (int i = number; i > 0; i--)
    {
        cout << i << " ";
    }

    clock_t end = clock();

    double time = (double)(end - start) / CLOCKS_PER_SEC;

    cout << "\n\nTime: " << time << " seconds\n\n" << endl;
    */

    //* ________________________________________________________________

    /*

    int number = 0;
    cout << "Please enter a number: ";
    cin >> number;

    clock_t start = clock();

    recursionFun(number);

    clock_t end = clock();

    double time = (double)(end - start) / CLOCKS_PER_SEC;

    cout << "\n\nTime: " << time << " seconds\n\n"
         << endl;

    */

    //* ________________________________________________________________

    /*

    int number = 0;
    cout << "Please enter a number: ";
    cin >> number;

    clock_t start = clock();

    recursionFun_2(number);

    clock_t end = clock();

    double time = (double)(end - start) / CLOCKS_PER_SEC;

    cout << "\n\nTime: " << time << " seconds\n\n"
         << endl;

    */

    //* ________________________________________________________________

    /*

    int number = 0;
    cout << "Please enter a number: ";
    cin >> number;

    clock_t start = clock();

    for (int i = 1; i <= number; i++)
    {
        cout << i << " ";
    }

    clock_t end = clock();

    double time = (double)(end - start) / CLOCKS_PER_SEC;

    cout << "\n\nTime: " << time << " seconds\n\n"
         << endl;

    */

    //* ________________________________________________________________

    /*

    int number = 0;
    cout << "Please enter a number: ";
    cin >> number;

    clock_t start = clock();

    recursionFun_3(number);

    clock_t end = clock();

    double time = (double)(end - start) / CLOCKS_PER_SEC;

    cout << "\n\nTime: " << time << " seconds\n\n";

    */

    //* ________________________________________________________________

    cout << endl
         << endl;

    return 0;
}
