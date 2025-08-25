#include <iostream>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    //* vector<T> vector_name
    vector<int> vecNumbers = {1, 2, 3, 4, 5};

    cout << "Vector Numbers: ";
    for (int &number : vecNumbers)
    {
        cout << number << " ";
    }
    
    

    cout << endl
         << endl;

    return 0;
}