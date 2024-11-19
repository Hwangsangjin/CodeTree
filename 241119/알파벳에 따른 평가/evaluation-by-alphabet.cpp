#include <iostream>
using namespace std;

int main()
{
    char Input;
    cin >> Input;

    if (Input == 'S')
    {
        cout << "Superior";
    }
    else if (Input == 'A')
    {
        cout << "Excellent";
    }
    else if (Input == 'B')
    {
        cout << "Good";
    }
    else if (Input == 'C')
    {
        cout << "Usually";
    }
    else if (Input == 'D')
    {
        cout << "Effort";
    }
    else
    {
        cout << "Failure";
    }

    return 0;
}