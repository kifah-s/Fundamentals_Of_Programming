
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <map>
#include <memory>

using namespace std;

// Forward declaration of DesignPattern classes
class DesignPattern;
class SingletonPattern;
class FactoryPattern;

// Factory for creating instances of different DesignPattern types
class DesignPatternFactory
{
public:
    static shared_ptr<DesignPattern> createPattern(const string &patternName);
};

// Base class for design patterns
class DesignPattern
{
public:
    virtual void describe() = 0;
    virtual void implement() = 0;
};

// Singleton Pattern class
class SingletonPattern : public DesignPattern
{
public:
    void describe() override
    {
        cout << "Singleton Pattern:\n"
             << "Description: The Singleton pattern ensures that a class has only one instance and provides a global point of access to it.\n ";
    }
    void implement() override
    {
        cout << "Implementation: [C++ code of Singleton pattern]\n"
             << "Example: [Example of Singleton pattern usage]\n";
    }
};

// Forward declaration of DesignPattern classes
class DesignPattern;
class SingletonPattern;
class FactoryPattern;

// Factory for creating instances of different DesignPattern types
class DesignPatternFactory
{
public:
    static shared_ptr<DesignPattern> createPattern(const string &patternName);
};

// Base class for design patterns
class DesignPattern
{
public:
    virtual void describe() = 0;
    virtual void implement() = 0;
};

// Singleton Pattern class
class SingletonPattern : public DesignPattern
{
public:
    void describe() override
    {
        cout << "Singleton Pattern:\n"
             << "Description: The Singleton pattern ensures that a class has only one instance and provides a global point of access to it.\n ";
    }
    void implement() override
    {
        cout << "Implementation: [C++ code of Singleton pattern]\n"
             << "Example: [Example of Singleton pattern usage]\n";
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
    cin >> N;
    string patternName;
    for (int i = 0; i < N; ++i)
    {
        cin >> patternName;
        auto pattern = DesignPatternFactory::createPattern(patternName);
        if (pattern)
        {
            pattern->describe();
            pattern->implement();
        }
        else
        {
            cout << "Unknown Design Pattern: " << patternName << endl;
        }
    }

    cout << "\n\n";

    return 0;
}
