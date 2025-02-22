#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Sum = 0;
    int N;
    cin >> N;

    while (N--)
    {
        int Input;
        cin >> Input;
        Sum += Input;
    }

    string Str = to_string(Sum);
    char First = Str[0];

    for (int i = 1; i < Str.length(); ++i)
        Str[i - 1] = Str[i];
    Str[Str.length() - 1] = First;

    cout << Str;
    return 0;
}