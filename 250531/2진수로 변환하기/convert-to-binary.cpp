#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string Binary;

    while (N > 0)
    {
        Binary = to_string(N % 2) + Binary;
        N /= 2;
    }

    cout << Binary;
    return 0;
}
