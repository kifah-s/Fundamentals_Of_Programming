
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

    //*____________________________________________________

    //* Create "vector" using malloc() and realloc functions.

    // Declare variables.
    int numberOfNumbers, *vec, pushNumber;

    // Receive value from user.
    cout << "Please enter a number of numbers: ";
    cin >> numberOfNumbers;

    // Reserve space in memory.
    vec = (int *)malloc(numberOfNumbers * sizeof(int));

    // Receive value from user.
    for (int i = 0; i < numberOfNumbers; i++)
    {
        cout << "Please enter a number: ";
        cin >> vec[i];
    }

    // Print elements of vector.
    for (int i = 0; i < numberOfNumbers; i++)
    {
        cout << vec[i] << " ";
    }

    do
    {
        // Receive value from user.
        cout << "\n\nPlease enter another number: ";
        cin >> pushNumber;

        // push a new number to vec.
        vec = (int *)realloc(vec, (numberOfNumbers + 1) * sizeof(int));
        vec[numberOfNumbers] = pushNumber;
        numberOfNumbers++;
    } while (pushNumber != 0);

    // Print elements of vector.
    for (int i = 0; i < numberOfNumbers - 1; i++)
    {
        cout << vec[i] << " ";
    }

    free(vec);

    cout << endl
         << endl;

    return 0;
}
