
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

    //*___________________________________________
    /*
    int *x = (int *)malloc(5 * sizeof(int)); //* using malloc() function

    if (x != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            x[i] = i + 1;
        }

        for (int i = 0; i < 5; i++)
        {
            cout << x[i] << "   ";
        }

        free(x);
    }
    else
    {
        cout << "Error";
    }
    */
    //*___________________________________________
    /*
    int *x = (int *)malloc(5 * sizeof(int)); //* using malloc() function

    if (x != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            x[i] = i + 1;
        }

        for (int i = 0; i < 5; i++)
        {
            cout << x[i] << "   ";
        }

        cout << endl
             << endl;

        x = (int *)realloc(x, 10); //* using malloc function

        for (int i = 0; i < 10; i++)
        {
            x[i] = i + 1;
        }

        for (int i = 0; i < 10; i++)
        {
            cout << x[i] << "   ";
        }

        free(x);
    }
    else
    {
        cout << "Error";
    }
    */
    //*___________________________________________

    cout << endl
         << endl;

    return 0;
}
