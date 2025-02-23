#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Cnt = 0;
    string Arr[200] = {};

    while (true)
    {
        string Input;
        cin >> Input;

        if (Input == "0")
            break;

        Arr[Cnt++] = Input;
    }

    cout << Cnt << "\n";

    for (size_t i = 0; i < Cnt; i += 2)
        cout << Arr[i] << "\n";

    return 0;
}