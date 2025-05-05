#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

void Answer(int N)
{
    int Arr[100] = {};

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];
    
    sort(Arr, Arr + N);

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << " ";
    cout << "\n";

    sort(Arr, Arr + N, greater<int>());

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << " ";
}

int main()
{
    int N;
    cin >> N;

    Answer(N);
    return 0;
}