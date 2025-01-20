#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[10] = {};

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int Min = INT_MAX;

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (A[i] > A[j])
            {
                if (A[i] - A[j] < Min)
                    Min = A[i] - A[j];
            }
            else
            {
                if (A[j] - A[i] < Min)
                    Min = A[j] - A[i];
            }
        }
    }

    cout << Min;
    return 0;
}