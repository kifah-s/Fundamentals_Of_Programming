
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <string>

using namespace std;
//* Classes ..
class Developer
{
protected:
    vector<string> skills;

public:
    Developer() {}
    void addSkill(const string &skill)
    {
        skills.push_back(skill);
    }
    virtual void displaySkills(const string &position)
    {
        cout << position << ": ";
        for (int i = 0; i < skills.size(); ++i)
        {
            cout << skills[i];
            if (i < skills.size() - 1)
                cout << ", ";
        }
        cout << endl;
    }
};

class JuniorDeveloper : public Developer
{
public:
    JuniorDeveloper(vector<string> baseSkills)
    {
        for (const auto &skill : baseSkills)
        {
            addSkill(skill);
        }
    }
};

class SeniorDeveloper : public JuniorDeveloper
{
public:
    SeniorDeveloper(vector<string> baseSkills, vector<string> additionalSkills)
        : JuniorDeveloper(baseSkills)
    {
        for (const auto &skill : additionalSkills)
        {
            addSkill(skill);
        }
    }
};

class LeadDeveloper : public SeniorDeveloper
{
public:
    LeadDeveloper(vector<string> baseSkills, vector<string> seniorSkills, vector<string> additionalSkills)
        : SeniorDeveloper(baseSkills, seniorSkills)
    {
        for (const auto &skill : additionalSkills)
        {
            addSkill(skill);
        }
    }
};

class DepartmentHead : public LeadDeveloper
{
public:
    DepartmentHead(vector<string> baseSkills, vector<string> seniorSkills, vector<string> leadSkills, vector<string> additionalSkills)
        : LeadDeveloper(baseSkills, seniorSkills, leadSkills)
    {
        for (const auto &skill : additionalSkills)
        {
            addSkill(skill);
        }
    }
};
//* End Classes ..

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

    int n, m, p, q;
    string skill;
    vector<string> juniorSkills, seniorSkills, leadSkills, headSkills;

    // Input for Junior Developer
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> skill;
        juniorSkills.push_back(skill);
    }

    // Input for Senior Developer
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> skill;
        seniorSkills.push_back(skill);
    }

    // Input for Lead Developer
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> skill;
        leadSkills.push_back(skill);
    }

    // Input for Department Head
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> skill;
        headSkills.push_back(skill);
    }

    // Creating objects and displaying skills
    JuniorDeveloper junior(juniorSkills);
    SeniorDeveloper senior(juniorSkills, seniorSkills);
    LeadDeveloper lead(juniorSkills, seniorSkills, leadSkills);
    DepartmentHead head(juniorSkills, seniorSkills, leadSkills, headSkills);
    junior.displaySkills("Junior Developer");
    senior.displaySkills("Senior Developer");
    lead.displaySkills("Lead Developer");
    head.displaySkills("Department Head");

    cout << "\n\n";

    return 0;
}
