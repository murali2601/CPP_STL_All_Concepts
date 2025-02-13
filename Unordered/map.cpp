#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string> mp;
     // Inserting elements
    mp[1] = "One";
    mp[2] = "Two";
    mp[3] = "Three";

    // Another way to insert
    mp.insert({4, "Four"});

    // Iterating over the map
    cout << "Map elements:\n";
    for (const auto& pair : mp) {
        cout << pair.first << " -> " << pair.second << endl;
    }

}

/* 
OUTPUT 

Map elements:
1 -> One
2 -> Two
3 -> Three
4 -> Four */