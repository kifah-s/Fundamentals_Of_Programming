
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <string>
#include <stdlib.h>
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

//* Classes ..
/*
class gammal
{
private:
    string name;
    int payment;

public:
    gammal *next;

    gammal()
    {
        cout << "New Member Created";
    }

    void getData()
    {
        cout << "Please enter name: ";
        cin >> name;

        cout << "Please enter payment: ";
        cin >> payment;

        next = NULL;
    }

    void print()
    {
        cout << "---------------" << endl;
        cout << name << endl
             << payment << endl;
    }

    ~gammal()
    {
        cout << "Member Deleted";
    }
};
*/
//* End Classes ..

//* Functions ..
/*
gammal *add(gammal *g)
{
    if (g == NULL)
    {
        g = new gammal;
        g->getData();
        return g;
    }
    g->next = add(g->next);
    return g;
}
*/

/*
void show(gammal *g)
{
    while (g != NULL)
    {
        g->print();
        g = g->next;
    }
    cout << "---------------" << endl;
}
*/
//* End Functions ..

int main()
{
    lessonSummaryFun();
    
    /*
    int a;

    gammal *head = NULL;

    do
    {
        cout << "1) Add" << endl
             << "2) Show" << endl
             << "Please enter a number: ";

        cin >> a;

        if (a == 1)
        {
            head = add(head);
        }
        else if (a == 2)
        {
            show(head);
        }

    } while (a);
    */

    cout << endl;

    return 0;
}
