#include <iostream>
using namespace std;

int main()
{
    int Array[10] = {};

    while (true)
    {
        int Input;
        cin >> Input;

         if (Input == 0)
            break;

        Input /= 10;
        Array[Input]++;
    }

    for (int i = 1; i < 10; ++i)
        cout << i << " - " << Array[i] << "\n";

    return 0;
}