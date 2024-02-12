
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

//* Classes ..

class gammal
{
public:
    gammal()
    {
        cout << "New member created .." << endl;
    }

    ~gammal()
    {
        cout << "Member deleted .." << endl;
    }
};

//* End Classes ..

//* Functions ..

void fun()
{
    gammal g; //* Storage in stack.

    // gammal *g = new gammal; //* Storage in heap.
}

//* End Functions ..

int main()
{
    lessonSummaryFun();

    gammal g; //* Storage in stack.

    fun(); 

    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << endl;

    return 0;
}
