#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int Arr[10];
    Arr[0] = A;
    Arr[1] = B;

    for (int i = 2; i < 10; ++i)
        Arr[i] = (Arr[i - 2] + Arr[i - 1]) % 10;
    
    for (int i = 0; i < 10; ++i)
        cout << Arr[i] << " ";

    return 0;
}