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
        cout << Array[i] * Array[i] << " ";
    }

    return 0;
}