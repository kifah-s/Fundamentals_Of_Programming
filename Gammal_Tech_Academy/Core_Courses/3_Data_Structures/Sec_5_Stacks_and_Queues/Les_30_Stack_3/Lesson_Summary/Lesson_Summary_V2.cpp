
//* >>>>> Lesson Summary (Version 2) .. <<<<< *//

#include <iostream>
#include <stack>
#include <ctime>

using namespace std;

//* Functions ..

// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << endl
         << "Lesson Summary (Version 2) .." << endl
         << endl;
}

//* End Functions ..

//* Classes ..

// Create class.
class gammal
{
private:
    string subject;

public:
    gammal(string s)
    {
        subject = s;
    }

    string print()
    {
        return subject;
    }
};

//* End Classes ..

int main()
{
    lessonSummaryFun();

    /*
    //* Create stack and variable.
    stack<gammal> g;
    string answer;

    //* Push elements.
    g.push(gammal("Final exam"));
    g.push(gammal("OOP"));
    g.push(gammal("Algorithms"));
    g.push(gammal("Data structures"));
    g.push(gammal("C++"));
    g.push(gammal("C"));

    //* Verify whether the student can obtain the certificate or not.
    while (!g.empty())
    {
        cout << "Did you finish " << g.top().print() << " !" << endl;
        cin >> answer;

        if (answer == "yes")
        {
            g.pop();
        }
    }

    cout << "\nVery good, now you can get the certificate.\n"
         << endl;
    */

    cout << endl;

    return 0;
}
