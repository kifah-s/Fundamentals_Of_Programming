
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
int hashCodeFun(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (int)c - 'a' + 1;
    }

    return (int)c - 'A' + 1;
}

// Hash Function.
int hashFun(string x)
{
    int r = 0;
    for (int i = 1; i <= x.size(); i++)
    {
        r += hashCodeFun(x[i - 1]) * i;
    }

    return r;
}

//* End Functions ..

//* Struct ..

// Declare Struct.
struct contact
{
    string name, number;
    contact *next;
} *hash_table[100];

//* End Struct ..

//* Function ..

// Insert Function.
void insertFun(int index, contact *c)
{
    if (hash_table[index % 100] == NULL)
    {
        hash_table[index % 100] = c;

        return;
    }

    contact *p = hash_table[index % 100];
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = c;

    return;
}

//* End Function ..

int main()
{
    lessonSummaryFun();

    // Declare variable.
    string ans;

    // Receive value.
    do
    {
        contact *c = new contact;

        cout << "Name: ";
        cin >> c->name;

        cout << "Number: ";
        cin >> c->number;

        c->next = NULL;

        int index = hashFun(c->name);

        insertFun(index, c);

        cout << "Do you have another contact? ";
        cin >> ans;
    } while (ans == "yes");

    // Print value.
    for (int i = 0; i < 100; i++)
    {
        if (hash_table[i] != NULL)
        {
            contact *p = hash_table[i];

            while (p != NULL)
            {
                cout << p->name << endl;
                cout << p->number << endl;

                p = p->next;
            }
        }
    }

    cout << endl;

    return 0;
}
