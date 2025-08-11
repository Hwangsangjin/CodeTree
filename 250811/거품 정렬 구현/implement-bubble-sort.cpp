#include <iostream>
using namespace std;

int main()
{
    int Arr[101] = {};
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    bool bSorted = true;

    do
    {
        bSorted = true;

        for (int i = 0; i < N - 1; ++i)
        {
            if (Arr[i] > Arr[i + 1])
            {
                int Temp = Arr[i];
                Arr[i] = Arr[i + 1];
                Arr[i + 1] = Temp;

                bSorted = false;
            }
        }

    }
    while (!bSorted);

    for (int i = 0; i < N; ++i)
        cout << Arr[i] << " ";

    return 0;
}