// same like map, but not sorted
// also keys are unique

#include <iostream>
#include<unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1,4,2,4,7,3,6,8,6,3,1,2,4,3,5};

    unordered_map<int,int> um;

   for(int num : v)
   {
     um[num]++;
   }

   for(const auto it : um)
   {
    cout << it.first << " " << it.second << endl;
   }


}