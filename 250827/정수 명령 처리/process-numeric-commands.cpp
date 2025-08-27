#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<int> Stack;

    int N;
    cin >> N;

    while (N--)
    {
        string Command;
        cin >> Command;

        if (Command == "push")
        {
            int Element;
            cin >> Element;
            Stack.push(Element);
        }
        else if (Command == "top")
        {
            cout << Stack.top() << "\n";
        }
        else if (Command == "size")
        {
            cout << Stack.size() << "\n";
        }
        else if (Command == "empty")
        {
            cout << (Stack.empty() ? 1 : 0) << "\n";
        }
        else if (Command == "pop")
        {
            cout << Stack.top() << "\n";
            Stack.pop();
        }
    }

    return 0;
}