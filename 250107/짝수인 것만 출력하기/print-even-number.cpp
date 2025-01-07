#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> Array[i];

        if (Array[i] % 2 == 0)
            cout << Array[i] << " ";
    }

    return 0;
}