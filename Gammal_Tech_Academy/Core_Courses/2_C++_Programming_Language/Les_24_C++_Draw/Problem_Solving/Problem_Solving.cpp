
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <string>

using namespace std;

// Abstract Product
class Component
{
public:
    virtual void operate() = 0;
};

// Concrete Products
class UIComponent : public Component
{
    string uiType;

public:
    UIComponent(string type) : uiType(type) {}
    void operate() override
    {
        cout << "UI Component " << uiType << " created successfully.\n ";
    }
};

class DBComponent : public Component
{
    string dbName;

public:
    DBComponent(string name) : dbName(name) {}
    void operate() override
    {
        cout << "Database " << dbName << " updated successfully.\n ";
    }
};

class DataProcessingComponent : public Component
{
    string dataType;

public:
    DataProcessingComponent(string type) : dataType(type) {}
    void operate() override
    {
        cout << "Data Processing for " << dataType << "completed.\n ";
    }
};

// Creator
class ComponentFactory
{
public:
    static Component *createComponent(const string &type, const string &param)
    {
        if (type == "CreateUI")
        {
            return new UIComponent(param);
        }
        else if (type == "UpdateDB")
        {
            return new DBComponent(param);
        }
        else if (type == "ProcessData")
        {
            return new DataProcessingComponent(param);
        }
        return nullptr;
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

    int N;
    string operation, param;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> operation >> param;
        Component *component = ComponentFactory::createComponent(operation, param);
        if (component)
        {
            component->operate();
            delete component;
        }
    }

    cout << "\n\n";

    return 0;
}
