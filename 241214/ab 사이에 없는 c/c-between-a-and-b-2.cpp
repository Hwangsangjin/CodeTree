#include <iostream>
using namespace std;

int main()
{
    bool Flag = true;
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = A; i <= B; i++)
    {
        if (i % C == 0)
        {
            Flag = false;
            break;
        }
    }

    cout << (Flag ? "YES" : "NO");
    return 0;
}