#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Examples ..\n"
         << endl;
}

// void set(int a)
// {
//     a = 0;

//     cout << "In set function a: << " << a << endl;
// }

// void set2(int *a)
// {
//     *a = 0;

//     cout << "In set function a: << " << *a << endl;
// }

// void set3(int &a)
// {
//     a = 0;

//     cout << "In set function a: << " << a << endl;
// }

// void swap(int n1, int n2)
// {
//     int temp = n1;
//     n1 = n2;
//     n2 = temp;
// }

// void swap2(int *n1, int *n2)
// {
//     int temp = *n1;
//     *n1 = *n2;
//     *n2 = temp;
// }

void swap3(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    WelcomeMessage();

    //* Call By Value & Call By Reference *//

    // int a = 10;

    // cout << "Befor calling set function a: " << a << endl;
    // set(a);
    // cout << "After calling set function a: " << a << endl;

    //* --------------------------------------------------------------

    // int a = 10;

    // cout << "Befor calling set function a: " << a << endl;
    // set2(&a);
    // cout << "After calling set function a: " << a << endl;

    //* --------------------------------------------------------------

    // int a = 10;

    // cout << "Befor calling set function a: " << a << endl;
    // set3(a);
    // cout << "After calling set function a: " << a << endl;

    //* --------------------------------------------------------------

    // int n1 = 10, n2 = 20;

    // cout << "Befor swap: " << endl;
    // cout << "n1: " << n1 << endl;
    // cout << "n2: " << n2 << endl;

    // swap(n1, n2);
    
    // cout << "\nAfter swap: " << endl;
    // cout << "n1: " << n1 << endl;
    // cout << "n2: " << n2 << endl;
    
    //* --------------------------------------------------------------

    // int n1 = 10, n2 = 20;

    // cout << "Befor swap: " << endl;
    // cout << "n1: " << n1 << endl;
    // cout << "n2: " << n2 << endl;

    // swap2(&n1, &n2);
    
    // cout << "\nAfter swap: " << endl;
    // cout << "n1: " << n1 << endl;
    // cout << "n2: " << n2 << endl;
    
    //* --------------------------------------------------------------

    int n1 = 10, n2 = 20;

    cout << "Befor swap: " << endl;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;

    swap3(n1, n2);
    
    cout << "\nAfter swap: " << endl;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;

    cout << endl
         << endl;

    return 0;
}