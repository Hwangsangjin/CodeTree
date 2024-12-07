#include <iostream>
using namespace std;

int main()
{
    int N, Sum = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int Input;
        cin >> Input;
        Sum += Input;
    }

    cout << fixed;
    cout.precision(1);
    cout << Sum << " " << static_cast<double>(Sum) / N;
    return 0;
}