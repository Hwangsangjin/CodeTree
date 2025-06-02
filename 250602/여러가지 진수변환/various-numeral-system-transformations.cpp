#include <iostream>
using namespace std;

int main()
{
    int N = 29;
    int A[1001] = {};
    int Count = 0;
    
    while (true)
    {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % 2;
        n /= 2;
    }
    
    // print binary number
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
}
