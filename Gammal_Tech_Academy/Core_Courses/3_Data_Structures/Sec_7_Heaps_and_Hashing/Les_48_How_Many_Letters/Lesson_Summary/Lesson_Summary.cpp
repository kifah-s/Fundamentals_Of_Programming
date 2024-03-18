
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

// Hash Code Function.
int hashCodeFun(char x)
{
    if (x >= 'a' && x <= 'z')
    {
        return (int)x - 'a';
    }

    return (int)x - 'A';
}
//* End Functions ..

//* Declare array - (Hash Table).
int ans[26];

int main()
{
    lessonSummaryFun();

    // Declare variable.
    char c;

    cout << "Please enter letters: " << endl;
    while (cin >> c && c != '*')
    {
        // Receive value from user.
        ans[hashCodeFun(c)]++;
    }

    // Print.
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout << i << " : " << ans[hashCodeFun(i)] << endl;
    }

    cout << endl;

    return 0;
}
