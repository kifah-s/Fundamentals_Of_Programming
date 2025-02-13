
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

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

    unordered_map<string, string> gitCommands = {
        {"git init", "Initializes a new Git repository."},
        {"git clone", "Clones a repository into a new directory."},
        {"git add", "Adds changes in the working directory to the staging area."},
        {"git commit", "Records changes in the repository with a commit message."},
        {"git status", "Displays the state of the working directory andstaging area."},
        {"git push", "Updates remote references along with associated objects."},
        {"git pull", "Fetches from and integrates with another repository or a local branch."},
        {"git branch", "Lists, creates, or deletes branches."},
        {"git checkout", "Switches branches or restores working tree files."},
        {"git merge", "Joins two or more development histories together."}};
        
    int N;
    cin >> N;
    string command;
    while (N--)
    {
        cin.ignore();
        getline(cin, command);
        cout << gitCommands[command] << endl;
    }

    cout << "\n\n";

    return 0;
}
