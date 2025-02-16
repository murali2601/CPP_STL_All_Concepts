#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//unique only remove consecutive elements from the container
int main()
{
    vector <int> v = {1,4,2,3,5,2,1};

    sort(v.begin(),v.end());

   v.erase(unique(v.begin(),v.end()),v.end());

   for(auto it : v)
   {
    cout << it << endl;
   }
}