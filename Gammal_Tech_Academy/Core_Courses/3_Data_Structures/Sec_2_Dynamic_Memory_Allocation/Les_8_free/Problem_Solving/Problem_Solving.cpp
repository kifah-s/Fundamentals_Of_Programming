
//*  Problem Solving ..

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>
#include <queue>
#include <cstring>

using namespace std;

//* Structs ..
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
//* End Structs ..

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Problem Solving ..\n"
         << endl;
}

//* End Function ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

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

    cout << endl
         << endl;

    return 0;
}
