
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

//* Declare array.
int ans[26];

int main()
{
    lessonSummaryFun();

    // Declare variable.
    char c;

    for (int i = 0; i < 26; i++)
    {
        // Receive value from user.
        cout << "Please enter character: ";
        cin >> c;

        ans[hashCodeFun(c)]++;
    }

    // Print.
    for (int i = 0; i < 26; i++)
    {
        cout << ans[i] << endl;
    }

    cout << endl;

    return 0;
}
