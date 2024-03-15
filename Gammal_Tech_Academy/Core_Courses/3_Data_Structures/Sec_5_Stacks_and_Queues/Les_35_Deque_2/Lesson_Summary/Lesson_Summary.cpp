
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <deque>
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
    //* Declare deque and variables.
    deque<int> station;
    int front = 0, back = 0;

    //* Receive vale from user.
    do
    {
        cout << "Please enter number of train coming from the front: ";
        cin >> front;

        cout << "Please enter number of train coming from the back: ";
        cin >> back;

        station.push_front(front);
        station.push_back(back);

    } while (front || back);
    //* front != 0 || back != 0

    cout << endl
         << endl;

    //* Print value.
    while (!station.empty())
    {
        if (station.front() != 0)
        {
            cout << "Number of train leaving from the front: " << station.front() << endl;
        }
        if (station.back() != 0)
        {
            cout << "Number of train leaving from the back: " << station.back() << endl;
        }

        station.pop_front();
        station.pop_back();
    }
    */

    cout << endl;

    return 0;
}
