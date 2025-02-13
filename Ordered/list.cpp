#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> ls;


    ls.push_back(2); // {2}
    ls.emplace_back(3); // {2,3}

    for(auto i : ls)
    {
        cout << i << " ";
    }

    cout << "\n\n---------------------------------------\n\n";

    ls.push_front(1); // {1,2,3}
    ls.emplace_front(1); // {2,3}

     for(auto i : ls)
    {
        cout << i << " ";
    }

    //rest function are similar to vector
    // begin,end,ebegin.rend,clear,insert,size,swap

}
