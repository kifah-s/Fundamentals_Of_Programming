
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class
class SoftwareDeveloper
{
public:
    virtual vector<string> getSkills() = 0;
};

// Derived classes
class JuniorDeveloper : public SoftwareDeveloper
{
public:
    vector<string> getSkills() override
    {
        return {"Debugging"};
    }
};

class Developer : public JuniorDeveloper
{
public:
    vector<string> getSkills() override
    {
        auto skills = JuniorDeveloper::getSkills();
        skills.push_back("Code Optimization");
        return skills;
    }
};

class SeniorDeveloper : public Developer
{
public:
    vector<string> getSkills() override
    {
        auto skills = Developer::getSkills();
        skills.push_back("System Architecture");
        return skills;
    }
};

class CTO : public SeniorDeveloper
{
public:
    vector<string> getSkills() override
    {
        auto skills = SeniorDeveloper::getSkills();
        skills.push_back("Strategic Planning");
        return skills;
    }
};

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

// Function to print skills
void printSkills(const vector<string> &skills)
{
    for (const auto &skill : skills)
    {
        cout << skill << endl;
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    string position;
    cin >> position;
    SoftwareDeveloper *dev;
    if (position == "Junior Developer")
    {
        dev = new JuniorDeveloper();
    }
    else if (position == "Developer")
    {
        dev = new Developer();
    }
    else if (position == "Senior Developer")
    {
        dev = new SeniorDeveloper();
    }
    else if (position == "CTO")
    {
        dev = new CTO();
    }
    else
    {
        cout << "Invalid position" << endl;
        return 1;
    }
    auto skills = dev->getSkills();
    printSkills(skills);
    delete dev;

    cout << "\n\n";

    return 0;
}
