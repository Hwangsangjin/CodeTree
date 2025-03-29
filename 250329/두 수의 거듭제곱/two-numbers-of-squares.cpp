#include <iostream>
using namespace std;

void Answer(int A, int B)
{
    int Result = 1;

    for (int i = 0; i < B; ++i)
        Result *= A;
    
    cout << Result;
}

int main()
{
    int A, B;
    cin >> A >> B;

    Answer(A, B);
    return 0;
}