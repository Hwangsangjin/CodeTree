#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N < 0)
    {
        cout << "ice";
    }
    else if (N >= 100)
    {
        cout << "vapor";
    }
    else
    {
        cout << "water";
    }

    return 0;
}