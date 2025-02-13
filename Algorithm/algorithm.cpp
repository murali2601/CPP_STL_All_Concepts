#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {3,2,5,4,3,1,7,8};

     cout << "\n\n-----------BEFORE SORTING-----------\n\n";

    for(auto i : v)
    {
        cout << i << " ";
    }

    cout << "\n\n-----------AFTER SORTING----------\n\n";

    sort(v.begin(),v.end());

    for(auto i : v)
    {
        cout << i << " ";
    }

    cout << "\n\n---------------------------------------\n\n";

    auto max = max_element(v.begin(),v.end());
    auto min = min_element(v.begin(),v.end());

    cout << "max : " << *max << endl;
    cout << "min : " << *min << endl;
    
    cout << "\n\n---------------------------------------\n\n";
   
    reverse(v.begin(),v.end());

    for(auto i : v)
    {
        cout << i << " ";
    }
}

/* 
OUTPUT 


-----------BEFORE SORTING-----------

3 2 5 4 3 1 7 8 

-----------AFTER SORTING----------

1 2 3 3 4 5 7 8

---------------------------------------

max : 8
min : 1


---------------------------------------

8 7 5 4 3 3 2 1 */