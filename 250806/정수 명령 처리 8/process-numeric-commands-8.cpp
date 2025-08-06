#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<int> List;

    int N;
    cin >> N;

    while (N--)
    {
        string Command;
        cin >> Command;

        if (Command == "push_front")
        {
            int Element;
            cin >> Element;

            List.push_front(Element);
        }
        else if (Command == "push_back")
        {
            int Element;
            cin >> Element;

            List.push_back(Element);
        }
        else if (Command == "pop_front")
        {
            int Element = List.front();
            List.pop_front();

            cout << Element << "\n";
        }
        else if (Command == "pop_back")
        {
            int Element = List.back();
            List.pop_back();

            cout << Element << "\n";
        }
        else if (Command == "size")
        {
            cout << List.size() << "\n";
        }
        else if (Command == "empty")
        {
            cout << List.empty() << "\n";
        }
        else if (Command == "front")
        {
            cout << List.front() << "\n";
        }
        else
        {
            cout << List.back() << "\n";
        }
    }

    return 0;
}