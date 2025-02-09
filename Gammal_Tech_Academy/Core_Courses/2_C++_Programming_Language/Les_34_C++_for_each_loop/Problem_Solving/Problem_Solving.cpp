
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    int N;
    cin >> N;
    vector<int> numbers(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    // Using for_each loop
    for_each(numbers.begin(), numbers.end(), [](int &n)
             { 
                n *= 2;
                cout << n << endl; });

    // Using range-based for loop
    for (const auto &n : numbers)
    {
        cout << n / 2 * n / 2 << endl;
    }

    cout << "\n\n";

    return 0;
}
