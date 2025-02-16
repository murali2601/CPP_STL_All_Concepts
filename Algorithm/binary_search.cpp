#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {1,4,2,3,5,2,1};

    sort(v.begin(),v.end());

   bool present = binary_search(v.begin(),v.end(),3);
   cout << present << endl;
}