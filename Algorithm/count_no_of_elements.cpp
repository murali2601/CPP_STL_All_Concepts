#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {1,4,2,3,5,2,1};

    int freq = count(v.begin(),v.end(),1);

    cout << "Count of 1 : " << freq << endl;

    // return 0;
}