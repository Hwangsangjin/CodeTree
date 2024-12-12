#include <iostream>
using namespace std;

int main()
{
    bool Flag = false;
    int A, B;
    cin >> A >> B;

    for (int i = A; i <= B; i++)
    {
        if (1920 % i == 0 && 2880 % i == 0)
        {
            Flag = true;
            break;
        }
    }

    cout << Flag;
    return 0;
}