#include <iostream>
using namespace std;

int Answer(int A, int B)
{
    int Cnt = 0;

    for (int i = A; i <= B; ++i)
    {
        if (i % 2 == 0)
            continue;
        else if (i % 10 == 5)
            continue;
        else if (i % 3 == 0 && i % 9 != 0)
            continue;
        
        ++Cnt;
    }

    return Cnt;
}

int main()
{
    int A, B;
    cin >> A >> B;

    cout << Answer(A, B);
    return 0;
}