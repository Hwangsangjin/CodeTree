#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int Start = A * 60 + B;
    int End = C * 60 + D;

    cout << End - Start;
    return 0;
}