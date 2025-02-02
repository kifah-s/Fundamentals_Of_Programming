
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <string>
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
    cin.ignore(); // To ignore newline after reading N
    
    for (int i = 0; i < N; i++)
    {
        string query;
        getline(cin, query);
        if (query == "Hello")
        {
            cout << "Hello! How can I assist you today?" << endl;
        }
        else if (query.substr(0, 14) == "Tell me about ")
        {
            cout << "The " << query.substr(14) << " is an innovative solution by Gammal Tech.Would you like more details? " << endl;
        }
    }
    cout << "\n\n";

    return 0;
}
