#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 2)
    {
        cout << 28;
    }
    else if (N == 4 || N == 6 || N == 9 || N == 11)
    {
        cout << 30;
    }
    else
    {
        cout << 31;
    }

    return 0;
}