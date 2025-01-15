
//* >>>>> Problem Solving <<<<< */

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    cout << "\nProblem Solving ..\n\n";
}

pair<int, int> findPair(const vector<int> &nums, int target)
{
    unordered_map<int, int> hash;
    for (int num : nums)
    {
        if (num != 0 && target % num == 0)
        {
            if (hash.find(target / num) != hash.end())
            {
                return {min(num, target / num), max(num, target / num)};
            }
        }
        hash[num] = 1;
    }
    return {-1, -1}; // No solution found
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> target;
    pair<int, int> result = findPair(nums, target);
    if (result.first == -1)
    {
        cout << "No solution" << endl;
    }
    else
    {
        cout << result.first << " " << result.second << endl;
    }

    cout << "\n\n";

    return 0;
}
