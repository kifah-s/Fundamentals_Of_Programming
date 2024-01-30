
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <ctime>
#include <queue>
#include <cstring>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << endl
         << "Problem Solving .." << endl
         << endl;
}

struct Query
{
    char *text;
    Query(const char *q)
    {
        text = new char[strlen(q) + 1];
        strcpy(text, q);
    }
    ~Query()
    {
        delete[] text;
    }
};

//* End Functions ..

int main()
{
    problemSolvingFun();

    int Q;
    cin >> Q;

    cin.ignore(); // Ignore newline after reading integer

    queue<Query *> queries;

    for (int i = 0; i < Q; i++)
    {
        char input[101];
        cin.getline(input, 101);
        queries.push(new Query(input));
    }

    if (!queries.empty())
    {
        cout << queries.front()->text << endl;
        delete queries.front();
        queries.pop();
    }

    // Free remaining queries
    while (!queries.empty())
    {
        delete queries.front();
        queries.pop();
    }

    cout << endl;

    return 0;
}
