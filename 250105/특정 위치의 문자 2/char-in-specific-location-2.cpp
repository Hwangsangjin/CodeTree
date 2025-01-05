#include <iostream>
using namespace std;

int main()
{
    char Array[10];

    for (int i = 0; i < 10; ++i)
        cin >> Array[i];

    cout << Array[1] << " " << Array[4] << " " << Array[7];
    return 0;
}