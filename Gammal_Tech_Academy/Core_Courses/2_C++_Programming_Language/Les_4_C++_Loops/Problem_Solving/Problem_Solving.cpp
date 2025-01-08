
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>

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
    
    int highPerformanceCount = 0, moderatePerformanceCount = 0,
        lowPerformanceCount = 0;

    for (int i = 0; i < N; i++)
    {
        int powerScore;
        cin >> powerScore;

        if (powerScore >= 8)
        {
            highPerformanceCount++;
        }
        else if (powerScore >= 4)
        {
            moderatePerformanceCount++;
        }
        else
        {
            lowPerformanceCount++;
        }
    }
    
    cout << highPerformanceCount << endl;
    cout << moderatePerformanceCount << endl;
    cout << lowPerformanceCount << endl;

    cout << "\n\n";

    return 0;
}
