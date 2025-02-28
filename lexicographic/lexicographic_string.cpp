#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abc";

    vector<string> v_str;

    while(next_permutation(begin(s),end(s)))
    {
        // cout << s << endl;
        v_str.push_back(s);
    }

    for(auto s : v_str)
    {
        cout << s << endl;
    }
    return 0;
}