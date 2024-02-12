
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

    bool comp(string x)
    {
        return x == name;
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

gammal *del(gammal *g)
{
    gammal *head = g;
    gammal *prev = NULL;

    string n;
    cout << "Please enter name: ";
    cin >> n;

    while (g != NULL)
    {
        if (g->comp(n))
        {
            if (prev == NULL)
            {
                head = g->next;
                delete (g);
                return head;
            }
            else
            {
                prev->next = g->next;
                delete (g);
                return head;
            }
        }
        else
        {
            prev = g;
            g = g->next;
        }
    }

    return head;
}

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
            head = del(head);
        }
        else if (a == 3)
        {
            show(head);
        }

    } while (a);
    */

    cout << endl;

    return 0;
}
