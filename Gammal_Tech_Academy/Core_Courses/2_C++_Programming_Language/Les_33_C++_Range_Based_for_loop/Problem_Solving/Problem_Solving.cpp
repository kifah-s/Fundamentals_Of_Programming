
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void swapFirstLast(vector<T> &v)
{
    T temp = v.front();
    v.front() = v.back();
    v.back() = temp;
}

template <typename T>
void printVector(const vector<T> &v)
{
    for (const T &item : v)
    {
        cout << item << " ";
    }
    cout << endl;
}

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int T;
    cin >> T;
    while (T--)
    {
        string dataType;
        int N;
        cin >> dataType >> N;
        if (dataType == "int")
        {
            vector<int> v(N);
            for (int &i : v)
                cin >> i;
            printVector(v);
            swapFirstLast(v);
            printVector(v);
        }
        else if (dataType == "char")
        {
            vector<char> v(N);
            for (char &c : v)
                cin >> c;
            printVector(v);
            swapFirstLast(v);
            printVector(v);
        }
        else if (dataType == "float")
        {
            vector<float> v(N);
            for (float &f : v)
                cin >> f;
            printVector(v);
            swapFirstLast(v);
            printVector(v);
        }
    }

    cout << "\n\n";

    return 0;
}
