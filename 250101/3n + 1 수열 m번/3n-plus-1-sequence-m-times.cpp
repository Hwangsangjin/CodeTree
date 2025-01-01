#include <iostream>
using namespace std;

int main()
{
    int M;
    cin >> M;

    while (M--)
    {
        int N, Count = 0;
        cin >> N;

        while (N != 1)
        {
            N = (N % 2 == 0) ? N / 2 : N * 3 + 1;
            ++Count;
        }

        cout << Count << "\n";
    }

    return 0;
}