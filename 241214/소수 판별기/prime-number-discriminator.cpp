#include <iostream>
using namespace std;

int main()
{
    bool Flag = true;
    int N;
    cin >> N;

    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            Flag = false;
            break;
        }
    }

    cout << (Flag ? 'P' : 'C');
    return 0;
}