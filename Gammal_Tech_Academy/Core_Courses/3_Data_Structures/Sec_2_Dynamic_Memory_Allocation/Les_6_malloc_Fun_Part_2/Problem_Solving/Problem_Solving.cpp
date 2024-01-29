
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving .." << endl
         << endl;
}

// .................................
void resizeArray(int *&arr, int &capacity)
{
    int *temp = (int *)malloc(capacity * 2 * sizeof(int));

    for (int i = 0; i < capacity; i++)
    {
        temp[i] = arr[i];
    }

    free(arr);

    arr = temp;

    capacity *= 2;
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;

        int capacity = 1;
        int *arr = (int *)malloc(capacity * sizeof(int));
        int size = 0;

        for (int i = 0; i < N; i++)
        {
            if (size == capacity)
            {
                resizeArray(arr, capacity);
            }
            cin >> arr[size++];
        }

        cout << capacity << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;

        free(arr);
    }

    cout << endl;

    return 0;
}
