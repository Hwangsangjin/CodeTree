#include <iostream>
using namespace std;

void Answer(int& A, int& B)
{
    if (A < B)
    {
        A += 10;
        B *= 2;
    }
    else
    {
        B += 10;
        A *= 2;
    }
}

int main()
{
    int A, B;
    cin >> A >> B;

    Answer(A, B);
    cout << A << " " << B;
    return 0;
}