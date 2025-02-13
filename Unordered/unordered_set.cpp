//not sorted 
// but unique

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> u;

    u.insert(3);
    u.insert(1);
    u.insert(4);
    u.insert(9);
    u.insert(7);

     for(auto i : u)
    {
        cout << i << " ";
    }

    cout << "\n\n---------------------------------------\n\n";
}
/* 
OUTPUT 

7 9 4 1 3 

--------------------------------------- */