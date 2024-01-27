
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>
#include <stdlib.h>

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
    int *x = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        x[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << "   ";
    }
    */

    //*_________________________________________________

    /*
    int *x = (int *)malloc(5 * sizeof(int));

    if (x == NULL)
    {
        cout << "Memory not allocated" << endl;
        return 0;
    }

    for (int i = 0; i < 5; i++)
    {
        x[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << "   ";
    }
    */

    //*_________________________________________________

    cout << endl;

    return 0;
}
