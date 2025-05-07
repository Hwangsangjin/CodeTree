#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[100] = {};
    int B[100] = {};

    for (int i = 0; i < N; ++i)
        cin >> A[i];
    
    for (int i = 0; i < N; ++i)
        cin >> B[i];
    
    sort(A, A + N);
    sort(B, B + N);

    bool bEqual = true;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] != B[i])
        {
            bEqual = false;
            break;
        }
    }

    cout << (bEqual ? "Yes" : "No");
    return 0;
}