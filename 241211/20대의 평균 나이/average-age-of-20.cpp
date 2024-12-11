#include <iostream>
using namespace std;

int main()
{
    int N, Count = 0;
    double Average = 0.0;

    while (cin >> N)
    {       
        if (N < 20 || N >= 30)
            break;

        Average += N;
        Count++;
    }

    cout << fixed;
    cout.precision(2);
    cout << Average / Count;
    return 0;
}