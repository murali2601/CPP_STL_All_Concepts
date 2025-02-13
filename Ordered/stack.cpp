#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);  // Stack: {5, 4, 3, 2, 1} (Top -> Bottom)
    s.emplace(6);  // Stack: {6, 5, 4, 3, 2, 1} (Top -> Bottom)

    cout << "Top element: " << s.top() << endl; // Output: 6

    cout << "\n\n---------------------------------------\n\n";

    // Printing and emptying the stack
    while (!s.empty()) 
    {
        cout << s.top() << " ";
        s.pop();
    }

    // Now the stack is empty
    cout << "\n\n---------------------------------------\n\n";

    cout << "Top element after popping all elements: ";
    
    if (!s.empty()) 
        cout << s.top() << endl;  // This check prevents an error
    else
        cout << "Stack is empty!" << endl;

    return 0;
}
