
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
     *   in c:

     *   int *x = (int *) malloc (4);
     *   int *y = (int *) calloc (4 , 10);
     *   free(x);
     *   free(y);
     *
     *   ==
     *
     *   in c++:
     *
     *   int *x = new int;
     *   int *y = new int[10];
     *   delete(x);
     *   delete[](y);
     */

    //* --------------------------------------------------

    int *y = new int[10];

    for (int i = 0; i < 10; i++)
    {
        y[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << y[i] << endl;
    }

    delete[](y);

    cout << endl;

    return 0;
}
