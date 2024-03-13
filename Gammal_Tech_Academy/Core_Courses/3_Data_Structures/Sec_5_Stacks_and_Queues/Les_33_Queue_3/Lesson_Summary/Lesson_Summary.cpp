
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <queue>
#include <string>
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

//* Classes ..
/*
class kifah
{
private:
    string name;
    int dd, mm, yy;

public:
    kifah(string s, int d, int m, int y)
    {
        name = s;
        dd = d;
        mm = m;
        yy = y;
    }

    bool check(int d, int m, int y)
    {
        if (d == dd && m == mm && y == yy + 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string printName()
    {
        return name;
    }
};
*/
//* End Classes ..

int main()
{
    lessonSummaryFun();

    //* ---------------------------------------

    /*
    queue<kifah> k;

    k.push(kifah("s1", 1, 1, 2020));
    k.push(kifah("s2", 2, 1, 2020));
    k.push(kifah("s3", 3, 1, 2020));
    k.push(kifah("s4", 3, 1, 2020));
    k.push(kifah("s5", 4, 1, 2020));

    while (k.empty() == 0)
    {
        cout << "Please enter today's date: ";
        int d, m, y;
        cin >> d >> m >> y;

    two:
        if (k.front().check(d, m, y))
        {
            cout << "Deleting: ";
            cout << k.front().printName() << endl
                 << endl;

            k.pop();
            goto two;
        }
    }
    */

    //* ---------------------------------------

    cout << endl;

    return 0;
}
