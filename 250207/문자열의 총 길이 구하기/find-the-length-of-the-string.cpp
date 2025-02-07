#include <iostream>
using namespace std;

int main()
{
    string Arr[10];
    size_t Sum = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> Arr[i];
        Sum += Arr[i].length();
    }

    cout << Sum;
    return 0;
}