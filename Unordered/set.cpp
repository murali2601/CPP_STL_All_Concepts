// stores in sorted
// stores only unique values

#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4); // {1,2,3,4}
    
    s.emplace(6); // {1,2,3,4,6}


    for(auto i : s)
    {
        cout << i << " ";
    }

    cout << "\n\n---------------------------------------\n\n";

    auto it = s.find(8); // if not found , it return the iterator (which is count of elements of set)
    cout << *it;

    cout << "\n\n---------------------------------------\n\n";

    s.erase(3);

    
    for(auto i : s)
    {
        cout << i << " ";
    }
}

/* 
OUTPUT 

1 2 3 4 6 

---------------------------------------

5

---------------------------------------

1 2 4 6 */