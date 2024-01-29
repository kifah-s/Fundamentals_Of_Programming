
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
    int *x = (int *)calloc(5, 4); //* 20 Byte.

    for (int i = 0; i < 5; i++)
    {
        x[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << "  ";
    }

    free(x); //* free x.
    */

    cout << endl;

    return 0;
}
