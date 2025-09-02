#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> Deque;

    int N;
    cin >> N;

    while (N--)
    {
        string Command;
        cin >> Command;

        if (Command == "push_front")
        {
            int X;
            cin >> X;
            Deque.push_front(X);
        }
        else if (Command == "push_back")
        {
            int X;
            cin >> X;
            Deque.push_back(X);
        }
        else if (Command == "pop_front")
        {
            cout << Deque.front() << "\n";
            Deque.pop_front();
        }
        else if (Command == "pop_back")
        {
            cout << Deque.back() << "\n";
            Deque.pop_back();
        }
        else if (Command == "size")
        {
            cout << Deque.size() << "\n";
        }
        else if (Command == "empty")
        {
            cout << Deque.empty() << "\n";
        }
        else if (Command == "front")
        {
            cout << Deque.front() << "\n";
        }
        else if (Command == "back")
        {
            cout << Deque.back() << "\n";
        }
    }

    return 0;
}