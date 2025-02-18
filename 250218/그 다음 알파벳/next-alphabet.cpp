#include <iostream>
using namespace std;

int main()
{
    char Input;
    cin >> Input;

    if (Input == 'z')
        cout << 'a';
    else if (Input == 'Z')
        cout << 'A';
    else
        cout << char(Input + 1);

    return 0;
}