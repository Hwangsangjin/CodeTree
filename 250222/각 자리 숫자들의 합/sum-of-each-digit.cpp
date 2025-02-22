#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string Str = to_string(N);

    int Sum = 0;

    for (const auto& C : Str)
        Sum += C - '0';

    cout << Sum;
    return 0;
}