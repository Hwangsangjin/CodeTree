#include <iostream>
using namespace std;

int main()
{
    int A, B, Product = 1;
    cin >> A >> B;

    for (int i = 1; i <= B; i++)
    {
        if (i % A == 0)
        {
            Product *= i;
        }
    }

    cout << Product;
    return 0;
}