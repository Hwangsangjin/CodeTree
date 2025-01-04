#include <iostream>
using namespace std;

int main()
{
    int Array[10];
    int Sum = 0;
    double Avg = 0.0;
    int Count = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[i];

        if (i % 2 == 1)
            Sum += Array[i];

        if (i % 3 == 2)
        {
            Avg += Array[i];
            ++Count;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << Sum << " " << Avg / Count; 
    return 0;
}