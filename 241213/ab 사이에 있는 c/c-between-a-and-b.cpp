#include <iostream>
using namespace std;

int main()
{
    bool Flag = false;

    int A, B, C;
    cin >> A >> B >> C;

    for (int i = A; i <= B; i++)
    {
        if (i % C == 0)
            Flag = true;
    }

    cout << (Flag ? "YES" : "NO");
    return 0;
}