#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Arr[100];

    for (int i = 0; i < N; ++i)
    {
        int Input;
        cin >> Input;
        
        Arr[i] = Input * Input;
    }

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << " ";

    return 0;
}