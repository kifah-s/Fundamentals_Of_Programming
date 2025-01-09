
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

struct Developer
{
    string name;
    string country;
};

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

vector<Developer> parseInput(int n)
{
    vector<Developer> developers;
    string name, country;
    for (int i = 0; i < n; ++i)
    {
        cin >> name >> country;
        developers.push_back({name, country});
    }
    return developers;
}

bool isValidTeam(const Developer &a, const Developer &b, const Developer &c)
{
    return (a.country != b.country) && (a.country != c.country) &&
           (b.country != c.country);
}

void printValidTeams(const vector<Developer> &developers)
{
    bool found = false;
    int n = developers.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (isValidTeam(developers[i], developers[j],
                                developers[k]))
                {
                    cout << developers[i].name << "," << developers[j].name << "," << developers[k].name << endl;
                    found = true;
                }
            }
        }
    }
    if (!found)
    {
        cout << "No valid team formations possible." << endl;
    }
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    cin >> n;
    vector<Developer> developers = parseInput(n);
    printValidTeams(developers);

    cout << "\n\n";

    return 0;
}
