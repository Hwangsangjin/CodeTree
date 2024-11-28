#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = N; i <= N * 5; i += N)
    {
        cout << i << " ";
    }

    return 0;
}