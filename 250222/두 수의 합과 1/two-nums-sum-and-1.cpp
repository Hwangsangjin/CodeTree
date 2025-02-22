#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    string Str = to_string(A + B);

    int Cnt = 0;

    for (const auto& C : Str)
    {
        if (C == '1')
            ++Cnt;
    }

    cout << Cnt;
    return 0;
}