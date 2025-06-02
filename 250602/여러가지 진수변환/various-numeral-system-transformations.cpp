#include <iostream>
using namespace std;

int main()
{
    int N, B;
    cin >> N >> B;

     if (N == 0)
     {
        cout << 0;
        return 0;
    }

    int A[1001] = {};
    int Count = 0;
    
   while (N > 0)
    {
        A[Count++] = N % B;
        N /= B;
    }
    
    for (int i = Count - 1; i >= 0; --i)
        cout << A[i];
    
    return 0;
}