#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[100];

    for (int i = 0; i < N; ++i)
        cin >> Array[i];

    int Min = Array[0];
    int Count = 1;

    for (int i = 1; i < N; ++i)
    {
        if (Min > Array[i])
        {
            Min = Array[i];
            Count = 1;
        }
        else if (Min == Array[i])
        {
            ++Count;
        }
    }

    cout << Min << " " << Count;
    return 0;
}