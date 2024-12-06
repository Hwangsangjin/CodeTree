#include <iostream>
using namespace std;

int main()
{
    int Count1 = 0, Count2 = 0;

    for (int i = 0; i < 10; i++)
    {
        int Input;
        cin >> Input;

        if (Input % 3 == 0)
        {
            Count1++;
        }

        if (Input % 5 == 0)
        {
            Count2++;
        }
    }

    cout << Count1 << " " << Count2;
    return 0;
}