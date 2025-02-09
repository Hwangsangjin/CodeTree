#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Arr[20];

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> Arr[i];

    char C;
    cin >> C;

    int Cnt = 0;
    double Avg = 0.0;

    for (int i = 0; i < N; ++i)
    {
        if (Arr[i].front() == C)
        {
            ++Cnt;
            Avg += Arr[i].length();
        }
    }

    Avg /= Cnt;

    cout << fixed;
    cout.precision(2);
    cout << Cnt << " " << Avg;
    return 0;
}