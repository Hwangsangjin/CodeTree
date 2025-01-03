#include <iostream>
using namespace std;

int main()
{
    int Count = 0;
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int Score[4];
        int Sum = 0;

        for (int j = 0; j < 4; ++j)
        {
            cin >> Score[j];
            Sum += Score[j];
        }

        double Avg = static_cast<double>(Sum) / 4;

        if (Avg >= 60.0)
        {
            cout << "pass\n";
            ++Count;
        }
        else
        {
            cout << "fail\n";
        }
    }

    cout << Count;
    return 0;
}