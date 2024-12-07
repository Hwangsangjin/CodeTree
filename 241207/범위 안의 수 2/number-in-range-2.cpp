#include <iostream>
using namespace std;

int main()
{
    int Sum = 0, Count = 0;

    for (int i = 0; i < 10; i++)
    {
        int Input;
        cin >> Input;

        if (0 <= Input && Input <= 200)
        {
            Sum += Input;
            Count++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << Sum << " " << static_cast<double>(Sum) / Count;
    return 0;
}