#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int Count = 0;

    for (int i = 0; i < N; ++i)
    {
        int Input;
        cin >> Input;

        if (Input == M)
            ++Count;
    }

    cout << Count;
    return 0;
}