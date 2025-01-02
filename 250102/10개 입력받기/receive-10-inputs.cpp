#include <iostream>
using namespace std;

int main()
{
    int Array[10];
    int Sum = 0;
    int Count = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> Array[i];

        if (Array[i] == 0)
            break;

        Sum += Array[i];
        ++Count;
    }

    double Avg = static_cast<double>(Sum) / Count; 

    cout << fixed;
    cout.precision(1);
    cout << Sum << " " << Avg;
    return 0;
}