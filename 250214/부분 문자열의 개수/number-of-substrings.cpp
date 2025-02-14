#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    int Cnt = 0;

    size_t Pos = A.find(B);
    while (Pos != string::npos)
    {
        ++Cnt;
        Pos = A.find(B, Pos + 1);
    }

    cout << Cnt;
    return 0;
}