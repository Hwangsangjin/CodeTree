#include <iostream>
using namespace std;

int main()
{
    double Feet = 30.48;
    int Mile = 160934;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << Feet * 9.2 << "cm\n";
    cout << "1.3mi = " << Mile * 1.3 << "cm";
    return 0;
}