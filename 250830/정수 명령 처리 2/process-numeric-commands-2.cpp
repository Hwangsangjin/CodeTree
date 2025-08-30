#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> Q;

    int N;
    cin >> N;

    while (N--)
    {
        string Command;
        cin >> Command;

        if (Command == "push")
        {
            int X;
            cin >> X;
            Q.push(X);
        }
        else if (Command == "pop")
        {
            cout << Q.front() << "\n";
            Q.pop();
        }
        else if (Command == "size")
        {
            cout << Q.size() << "\n";
        }
        else if (Command == "empty")
        {
            cout << Q.empty() << "\n";
        }
        else if (Command == "front")
        {
            cout << Q.front() << "\n";
        }
    }

    return 0;
}