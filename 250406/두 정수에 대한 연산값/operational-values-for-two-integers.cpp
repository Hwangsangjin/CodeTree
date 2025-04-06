#include <iostream>
using namespace std;

void Answer(int& A, int& B)
{
    if (A > B)
    {
        A += 25;
        B *= 2;
    }
    else
    {
        B += 25;
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