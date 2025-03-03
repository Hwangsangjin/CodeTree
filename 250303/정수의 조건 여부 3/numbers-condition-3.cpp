#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;

    if (A % 13 == 0 || A % 19 == 0)
        cout << "True";
    else
        cout << "False";

    return 0;
}