#include <iostream>
using namespace std;

void Add(int A, char O, int C)
{
    cout << A << " " << O << " " << C << " = " << A + C;
}

void Sub(int A, char O, int C)
{
    cout << A << " " << O << " " << C << " = " << A - C;
}

void Mul(int A, char O, int C)
{
    cout << A << " " << O << " " << C << " = " << A * C;
}

void Div(int A, char O, int C)
{
    cout << A << " " << O << " " << C << " = " << A / C;
}

int main()
{
    int A, C;
    char O;
    cin >> A >> O >> C;

    switch (O)
    {
    case '+': Add(A, O, C); break;
    case '-': Sub(A, O, C); break;
    case '*': Mul(A, O, C); break;
    case '/': Div(A, O, C); break;
    default: cout << "False"; break;
    }

    return 0;
}