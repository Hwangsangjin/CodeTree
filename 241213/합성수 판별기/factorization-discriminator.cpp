#include <iostream>
using namespace std;

int main()
{
    bool Flag = false;
    int N;
    cin >> N;

    for (int i = 2; i <= N - 1; i++)
    {
        if (N % i == 0)
        {
            Flag = true;
            break;
        }
    }

    cout << (Flag ? 'C' : 'N');
    return 0;
}