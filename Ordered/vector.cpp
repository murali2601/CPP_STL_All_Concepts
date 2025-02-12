#include <iostream>
#include <vector>
using namespace std;

int main()

{
    vector<int> vec;
    
    int n;
    cin >> n;
    
    int num;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    
    for(auto i : vec)
    {
        cout << i << " ";
    }
    
    // after using pop()
    cout << "\n-----------------------------" << endl;
    vec.pop_back();
        
    for(auto i : vec)
    {
        cout << i << " ";
    }
    
    cout << "\n==============================" << endl;
    
    cout << "vec.front() : " << vec.front();
    cout << "vec.back() : " << vec.back();
    
    cout << "\n==============================" << endl;
    
    for(auto i = vec.begin(); i != vec.end() ; ++i)
    {
        cout << "*i : " << *i << " ";
    }
}