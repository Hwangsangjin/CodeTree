#include <iostream>
using namespace std;

int main()
{
    int N, a;
    cin >> N >> a;

    for (int i = 1; i <= N; ++i)
    {
        cout << (i % a == 0 ? 1 : 0) << "\n";
    }

    return 0;
}