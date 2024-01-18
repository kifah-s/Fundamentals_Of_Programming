
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Global Variables ..

int numberOfPhones, numberOfBox, boxStore[100];

//* End Global Variables ..

//* Functions ..

// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << endl
         << "Lesson Summary .." << endl
         << endl;
}

// Check 1 / Recursion Function.
int check_1_RecFun(int i, int t)
{
    if (i == numberOfBox) //* Base Case.
    {
        return numberOfPhones == t;
    }
    else //* Recursion Procedure.
    {
        return check_1_RecFun(i + 1, t + boxStore[i]) || check_1_RecFun(i + 1, t);
    }
}

// Check 2 / Recursion Function.
int check_2_RecFun(int i, int t)
{
    if (i == numberOfBox) //* Base Case.
    {
        return numberOfPhones == t;
    }
    else //* Recursion Procedure.
    {
        return check_1_RecFun(i + 1, t + boxStore[i]) + check_1_RecFun(i + 1, t);
    }
}

//* End Functions ..

int main()
{
    lessonSummaryFun();

    /*
    //* Receive value from user.
    cout << "Please enter number of phone you need: ";
    cin >> numberOfPhones;

    cout << "Please enter number of box: ";
    cin >> numberOfBox;

    cout << "\nPlease enter the number of phones in each box .." << endl;
    for (int i = 0; i < numberOfBox; i++)
    {
        cout << "Box " << i + 1 << ": ";
        cin >> boxStore[i];
    }
    //* Call "Check 1" / Recursion Function.
    if (check_1_RecFun(0, 0) == 1)
    {
        cout << "\nYes" << endl;
    }
    else
    {
        cout << "\nNo" << endl;
    }
    */

    /*
     //* Receive value from user.
     cout << "Please enter number of phone you need: ";
     cin >> numberOfPhones;

     cout << "Please enter number of box: ";
     cin >> numberOfBox;

     cout << "\nPlease enter the number of phones in each box .." << endl;
     for (int i = 0; i < numberOfBox; i++)
     {
         cout << "Box " << i + 1 << ": ";
         cin >> boxStore[i];
     }

     //* Call "Check 2" / Recursion Function.
     cout << endl
          << check_2_RecFun(0, 0) << endl;
     */

    cout << endl;

    return 0;
}
