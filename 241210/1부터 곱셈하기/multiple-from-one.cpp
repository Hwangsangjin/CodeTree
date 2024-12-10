#include <iostream>
using namespace std;

int main()
{
    int N, Product = 1;
    cin >> N;

    for (int i = 1; i <= 10; i++)
    {
        Product *= i;
        if (Product >= N)
        {
            cout << i;
            break;
        }
    }
    return 0;
}