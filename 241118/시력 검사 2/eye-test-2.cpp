#include <iostream>
using namespace std;

int main()
{
    double A;
    cin >> A;

    if (A >= 1.0)
    {
        cout << "High";
    }
    else if (A >= 0.5)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }

    return 0;
}