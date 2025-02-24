#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    int Len = A.length();

    for (int N = 1; N <= Len; ++N)
    {
        A = A.back() + A.substr(0, Len - 1);
        
        if (A == B)
        {
            cout << N << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}