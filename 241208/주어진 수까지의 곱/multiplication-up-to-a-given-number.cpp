#include <iostream>
using namespace std;

int main()
{
    int A, B, Product = 1;
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        Product *= i;
    }

    cout << Product;
    return 0;
}