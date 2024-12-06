#include <iostream>
using namespace std;

int main()
{
    int Count = 0;

    for (int i = 0; i < 5; i++)
    {
        int Input;
        cin >> Input;

        if (Input % 2 == 0)
        {
            Count++;
        }
    }

    cout << Count;
    return 0;
}