
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << endl
         << "Lesson Summary .." << endl
         << endl;
}

//* End Functions ..

int main()
{
    lessonSummaryFun();

    /*
    //* Declare variables.
    int number = 0;
    bool prime = true;

    //* Receive value from user.
    cout << "Please enter a number: ";
    cin >> number;

    //* Check number.
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = false;
        }
    }

    //* Print prime or not.
    if (prime == false || number < 2)
    {
        cout << "\nThis number " << number << " is Not prime" << endl;
    }
    else
    {
        cout << "\nThis number " << number << " is prime" << endl;
    }

    //* Complexity: O(n).
    */


    //* -----------------------------------------------------------------------

    /*
    //* Declare variables.
    int number = 0;
    int prime = 1;

    //* Receive value from user.
    cout << "Please enter a number: ";
    cin >> number;

    //* Check number.
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 )
        {
            prime = 0;
        }
    }

    //* Print prime or not.
    if (prime == 0 || number < 2)
    {
        cout << "\nThis number " << number << " is Not prime" << endl;
    }
    else
    {
        cout << "\nThis number " << number << " is prime" << endl;
    }

    //* Complexity: O(n).
    */


    //* -----------------------------------------------------------------------

    
    //* Declare variables.
    int number = 0;
    bool prime = true;

    //* Check number.
    while (1)
    {
        //* Receive value from user.
        cout << "\nPlease enter a number: ";
        cin >> number;

        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                prime = false;
            }
        }

        //* Print prime or not.
        if (prime == 0 || number < 2)
        {
            cout << "\nThis number " << number << " is Not prime" << endl;
        }
        else
        {
            cout << "\nThis number " << number << " is prime" << endl;
        }
    }

    //* Complexity: O(m * n).
    

    //* -----------------------------------------------------------------------

    cout << endl;

    return 0;
}
