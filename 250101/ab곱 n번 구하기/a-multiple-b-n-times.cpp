#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int A, B, Sum = 1;
        cin >> A >> B;

        for (int j = A; j <= B; ++j)
            Sum *= j;
        
        cout << Sum << "\n";
    }

    return 0;
}