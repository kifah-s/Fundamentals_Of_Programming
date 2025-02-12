
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>

using namespace std;

class Entity
{
public:
    string name;
    vector<string> attributes, methods;

    Entity(string n) : name(n) {}

    void addAttribute(string attr)
    {
        attributes.push_back(attr);
    }

    void addMethod(string method)
    {
        methods.push_back(method);
    }

    void display()
    {
        cout << "Entity: " << name << endl;
        cout << "Attributes: ";
        for (int i = 0; i < attributes.size(); ++i)
        {
            cout << attributes[i];
            if (i < attributes.size() - 1)
                cout << ", ";
        }
        cout << endl;
        cout << "Methods: ";
        for (int i = 0; i < methods.size(); ++i)
        {
            cout << methods[i];
            if (i < methods.size() - 1)
                cout << ", ";
        }
        cout << endl;
    }
};

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int N, M, K;
    string entityName, detail;
    cin >> N;
    while (N--)
    {
        cin >> entityName >> M >> K;
        Entity entity(entityName);
        for (int i = 0; i < M; ++i)
        {
            cin >> detail;
            entity.addAttribute(detail);
        }
        for (int i = 0; i < K; ++i)
        {
            cin >> detail;
            entity.addMethod(detail);
        }
        entity.display();
    }

    cout << "\n\n";

    return 0;
}
