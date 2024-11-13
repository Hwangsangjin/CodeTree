#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    cout << fixed;
    cout.precision(2);
    cout << (double)(A + B) / (A - B);
    return 0;
}