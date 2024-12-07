#include <iostream>
using namespace std;

int main()
{
    int N, Sum = 0;
    cin >> N;

    while (N--)
    {
        int Input;
        cin >> Input;

        if (Input % 2 == 1 && Input % 3 == 0)
        {
            Sum += Input;
        }
    }

    cout << Sum;
    return 0;
}