#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <cctype>
#include <utility>
#include <map>
#include <cstring>

using namespace std;

// ... Namespaces ...
// Create namespace A.
namespace A
{
    void foo()
    {
        cout << "Hello from namespace A" << endl;
    }
}

// Create namespace B.
namespace B
{
    void foo()
    {
        cout << "Hello from namespace B" << endl;
    }
}

//* using namespace A;
//* using namespace B;
// ... End Namespaces ...