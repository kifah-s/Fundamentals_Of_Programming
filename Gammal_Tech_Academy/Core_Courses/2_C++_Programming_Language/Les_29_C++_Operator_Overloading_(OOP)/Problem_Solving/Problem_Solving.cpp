
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Classes ..
class GammalTechCalculator
{
public:
    // Overloading '+' operator to perform subtraction
    int operator+(int b)
    {
        return -b;
    }
    // Overloading '-' operator to perform addition
    int operator-(int b)
    {
        return b;
    }
};
//* End Classes ..

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
        char op;
        int A, B;
        cin >> op >> A >> B;
        GammalTechCalculator calc;
        switch (op)
        {
        case '+':
            cout << A + calc + B << endl;
            break;
        case '-':
            cout << A + calc - B << endl;
            break;
        }
    }

    cout << "\n\n";

    return 0;
}
