#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string Arr[100];

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    sort(Arr, Arr + N);

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << "\n";

    return 0;
}