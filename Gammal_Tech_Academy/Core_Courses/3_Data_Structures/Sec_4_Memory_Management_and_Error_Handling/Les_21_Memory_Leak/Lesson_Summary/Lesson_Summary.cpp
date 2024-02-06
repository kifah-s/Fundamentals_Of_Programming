
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

//* End Functions ..

int main()
{
    lessonSummaryFun();

    /*
    *   Here are some key differences between using malloc() inside and outside of main():

    *   Inside main():
    *   - Memory is allocated on the program stack.
    *   - Memory is automatically deallocated when the variable's scope ends.
    *   - Using malloc is safer than using it outside of main().

    *   Outside main():
    *   - Memory is allocated on the static memory area.
    *   - Memory must be manually deallocated using the free function.
    *   - Using malloc is more error-prone than using it inside main().
    */

    cout << endl;

    return 0;
}
