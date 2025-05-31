#include <iostream>
#include <string>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    // double num1 = 18.99;
    // int num2 = 0;

    // num2 = num1; //* Implicit conversion form double to int.
    // cout << "Num 1: " << num1 << endl;
    // cout << "Num 2: " << num2 << endl;

    // num2 = (int)num1; //* Explicit conversion.
    // cout << "Num 1: " << num1 << endl;
    // cout << "Num 2: " << num2 << endl;

    // num2 = int(num1); //* Explicit conversion.
    // cout << "Num 1: " << num1 << endl;
    // cout << "Num 2: " << num2 << endl;

    //* _____________________________________________________________
    
    // string str = "123.456";

    //* Convert string to integer.
    // int num_int = stoi(str);
    // cout << "Num int: " << num_int << endl;
    
    //* Convert string to float.
    // float num_float = stof(str);
    // cout << "Num float: " << num_float << endl;
    
    //* Convert string to double.
    // double num_double = stod(str);
    // cout << "Num double: " << num_double << endl;
    
    //* _____________________________________________________________
    
    // int num1 = 123;
    // double num2 = 123.456;
    // string str1, str2;
    
    //* Convert int to string.
    // str1 = to_string(num1);
    // cout << "Str 1: " << str1 << endl;

    //* Convert double to string.
    // str2 = to_string(num2);
    // cout << "Str 2: " << str2 << endl;


    cout << endl
         << endl;

    return 0;
}