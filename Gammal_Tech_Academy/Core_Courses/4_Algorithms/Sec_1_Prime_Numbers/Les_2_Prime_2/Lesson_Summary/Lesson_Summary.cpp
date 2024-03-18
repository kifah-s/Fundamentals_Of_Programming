
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <cmath>
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
    //* Check number.
    while (1)
    {
        //* Declare variables.
        int number = 0;
        bool prime = true;

        //* Receive value from user.
        cout << "\nPlease enter a number: ";
        cin >> number;

        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                prime = false;
                break; //* Reduce the number of steps if the number is prime.
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
    }

    //* Complexity: O(m * n).
    */

    //* ----------------------------------------------------------------------------

    //* Check number.
    while (1)
    {
        //* Declare variables.
        int number = 0;
        bool prime = true;

        //* Receive value from user.
        cout << "\nPlease enter a number: ";
        cin >> number;

        for (int i = 2; i <= sqrt(number); i++) //* sqrt(number): Reduce the number of steps if the number is prime.
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
    }

    //* Complexity: O(m * sqrt(n)).

    cout << endl;

    return 0;
}
