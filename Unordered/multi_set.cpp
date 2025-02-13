//sorted 
// but not hold unique

#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> m;

    m.insert(1);
    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(4);
    m.insert(5); // {1,1,2,3,4,5}

    for(auto i : m)
    {
        cout << i << " ";
    }

    cout << "\n\n---------------------------------------\n\n";

    m.erase(m.find(1)); // if simple m.erase(1) it will delete all 1's but if we do like this, it deletes only the first index of 1

    
    for(auto i : m)
    {
        cout << i << " ";
    }

    cout << "\n\n---------------------------------------\n\n";

      

}

/* 
OUTPUT : 

1 1 2 3 4 5 

---------------------------------------

1 2 3 4 5

--------------------------------------- */