
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> operations = {{1,3},{4,7},{6,1}};
    vector <int> nums = {1,2,4,6};

    for(int i = 0; i < operations.size();i++)
    {
        for(int j = 0; j < operations[i].size(); j++)
        {
            // cout << operations[i][j] << " ";
            // auto it = find()
            auto it = find(nums.begin(),nums.end(),operations[i][j]);
            replace(nums.begin(),nums.end(),*it, operations[i][++j]);
            // cout << *it << " ";

        }
    }

    // auto it = find(nums.begin(),nums.end(),operations[1][0]);
    // cout << *it << " ";
    // replace(nums.begin(),nums.end(),*it, operations[1][1]);
    for(auto n : nums)
    {
        cout << n << " ";
    }
    return 0;
}