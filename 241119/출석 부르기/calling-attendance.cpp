#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 1)
    {
        cout << "John";
    }
    else if (N == 2)
    {
        cout << "Tom";
    }
    else if (N == 3)
    {
        cout << "Paul";
    }
    else
    {
        cout <<"Vacancy";
    }

    return 0;
}