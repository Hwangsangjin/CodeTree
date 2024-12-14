#include <iostream>
using namespace std;

int main()
{
    bool Satisfied = true;

    for (int i = 0; i < 5; i++)
    {
        int Input;
        cin >> Input;

        if (Input % 3 != 0)
        {
            Satisfied = false;
            break;
        }
    }

    cout << Satisfied;
    return 0;
}