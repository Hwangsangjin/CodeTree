#include <iostream>
using namespace std;

int main()
{
    int Gender, Age;
    cin >> Gender >> Age;

    if (Gender == 0)
    {
        if (Age >= 19)
            cout << "MAN";
        else
            cout << "BOY";
    }
    else
    {
        if (Age >= 19)
            cout << "WOMAN";
        else
            cout << "GIRL";
    }

    return 0;
}