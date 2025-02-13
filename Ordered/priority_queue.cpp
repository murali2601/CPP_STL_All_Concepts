#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    while(!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    cout << "\n\n---------------------------------------\n\n";

    // If I don't want to store in reverse order

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.emplace(6);

     while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "\n\n---------------------------------------\n\n";
}

/* 
OUTPUT 

5 4 3 2 1 

---------------------------------------

1 2 3 4 5 6

--------------------------------------- */