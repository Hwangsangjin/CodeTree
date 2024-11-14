#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    const int Sum = A + B + C;
    const int Avg = Sum / 3;
    
    cout << Sum << endl;
    cout << Avg << endl;
    cout << Sum - Avg;
    return 0;
}