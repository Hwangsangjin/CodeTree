#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[100];
    Array[0] = 1;
    Array[1] = N; 

    int i = 2;
    while (true)
    {
        Array[i] = Array[i - 1] + Array[i - 2];

        if (Array[i] >= 100)
            break;

        ++i;
    }

    for (int j = 0; j <= i; ++j)
        cout << Array[j] << " ";

    return 0;
}