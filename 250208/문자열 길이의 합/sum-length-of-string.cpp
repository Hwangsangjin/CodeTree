#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Arr[10];

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    int Sum = 0;
    int Count = 0;

    for (int i = 0; i < N; ++i)
    {
        Sum += Arr[i].length();

        for (int j = 0; j < Arr[i].length(); ++j)
        {
            if (Arr[i][j] == 'a')
                ++Count;
        }
    }

    cout << Sum << " " << Count;
    return 0;
}