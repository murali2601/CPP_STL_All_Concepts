#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(1); //normal push back
    v.emplace_back(2); // faster than push back

    for(auto i : v)
    {
        cout << "i : " << i << endl;
    }

    cout << "\n-------------VECTOR INIT WITH VALUE------------\n";
    // initializes 5 containers with 100 value each
    vector <int> v1(5,100); // {100,100,100,100,100}

     for(auto i : v1)
    {
        cout << i << " ";
    }

    cout << "\n--------------VECTOR ASSIGN WITHOUT VALUE-------------\n";

// initializes 5 containers with 0 value each
    vector <int> v2(5); // {0,0,0,0,0}

     for(auto i : v2)
    {
        cout << i << " ";
    }

    cout << "\n-------------COPY VECTOR--------------\n";

    vector <int> v3(v1);
    
    // for(auto it=v3.begin(); it != v3.end(); ++it)
    // {
    //     cout << *it << " ";
    // }

    // (or)  either of them we can use
    for(vector<int>::iterator it = v3.begin(); it != v3.end();++it)
    {
        cout << *it << " ";
    }


    return 0;
}