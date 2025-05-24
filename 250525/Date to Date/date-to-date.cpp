#include <iostream>
using namespace std;

int main()
{
    int M1, D1, M2, D2;
    cin >> M1 >> D1 >> M2 >> D2;

    int Month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int Days1 = D1;
    for (int i = 1; i < M1; ++i)
        Days1 += Month[i];

    int Days2 = D2;
    for (int i = 1; i < M2; ++i)
        Days2 += Month[i];

    cout << Days2 - Days1 + 1;
    return 0;
}