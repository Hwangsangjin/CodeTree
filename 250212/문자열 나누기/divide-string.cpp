#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string Arr[10];

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    int Count = 0;

    for (int i = 0; i < N; ++i)
    {
        for (char C : Arr[i])
        {
            cout << C;
            ++Count;

            if (Count == 5)
            {
                cout << "\n";
                Count = 0;
            }
        }
    }

    return 0;
}