#include <iostream>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    if (1.0 <= A && 1.0 <= B)
    {
        cout << "High";
    }
    else if (0.5 <= A && 0.5 <= B)
    {
        cout << "Middle";
    }
    else
    {
        cout << "Low";
    }

    return 0;
}