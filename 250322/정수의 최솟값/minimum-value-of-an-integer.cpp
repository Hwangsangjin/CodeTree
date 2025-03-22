#include <iostream>
using namespace std;

int Answer(int A, int B, int C)
{
    int Min = A;

    if (Min > B)
        Min = B;
    
    if (Min > C)
        Min = C;
    
    return Min;
}

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    cout << Answer(A, B, C);
    return 0;
}