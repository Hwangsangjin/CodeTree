#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0)
        {
            cout << 0 << " ";
            continue;
        }

        int Num = i;
        bool bHas369 = false;

        while (Num > 0)
        {
            int Digit = Num % 10;
            if (Digit == 3 || Digit == 6 || Digit == 9)
            {
                bHas369 = true;
                break;
            }

            Num /= 10;
        }

        cout << (bHas369 ? 0 : i) << " ";
    }

    return 0;
}