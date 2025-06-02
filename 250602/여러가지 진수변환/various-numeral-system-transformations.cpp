#include <iostream>
using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;

    int A[1001] = {};
    int Count = 0;
    
    while (true)
    {
        if (N < 2)
        {
            A[Count++] = N;
            break;
        }
    
        A[Count++] = N % B;
        N /= B;
    }
    
    for (int i = Count - 1; i >= 0; --i)
        cout << A[i];
    
    return 0;
}