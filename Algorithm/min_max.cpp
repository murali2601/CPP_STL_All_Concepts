#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {1,4,2,3,5,22,1};

    cout << "Minimum element : " << *min_element(v.begin(),v.end()) << endl;
    cout << "Minimum element : " << *max_element(v.begin(),v.end()) << endl;

    return 0;;
}