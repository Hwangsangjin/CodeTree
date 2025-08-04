#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> Vector;
    string Command;
    int Item, Index;

    int N;
    cin >> N;

    while (N--)
    {
        cin >> Command;

        if (Command == "push_back")
        {
            cin >> Item;
            Vector.push_back(Item);
        }
        else if (Command == "get")
        {
            cin >> Index;

            if (Index >= 1 && Index <= Vector.size())
                cout << Vector[Index - 1] << "\n";
        }
        else if (Command == "size")
        {
            cout << Vector.size() << "\n";
        }
        else if (Command == "pop_back")
        {
            if (!Vector.empty())
                Vector.pop_back();
        }
    }

    return 0;
}