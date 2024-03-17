
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

// Hash Function 1.
int hashFun_1(string x)
{
    int r = 0;

    for (int i = 0; i < x.size(); i++)
    {
        r += (int)x[i] - 'A' + 1;
    }

    return r;
}

// Hash Function 2.
int hashFun_2(string x)
{
    int r = 0;

    for (int i = 1; i < x.size(); i++)
    {
        r += ((int)x[i - 1] - 'A' + 1) * i;
    }

    return r;
}
//* End Functions ..

int main()
{
    lessonSummaryFun();

    int hash_1 = 0, hash_2 = 0;
    string s_1 = "ABC";
    string s_2 = "CBA";

    hash_1 = hashFun_1(s_1);
    hash_2 = hashFun_1(s_2);

    cout << "hash 1: " << hash_1 << endl;
    cout << "hash 2: " << hash_2 << endl
         << endl;

    cout << "-------------------------------" << endl;

    hash_1 = hashFun_2(s_1);
    hash_2 = hashFun_2(s_2);

    cout << "\nhash 1: " << hash_1 << endl;
    cout << "hash 2: " << hash_2 << endl
         << endl;

    cout << endl;

    return 0;
}
