#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            cout << "*" << endl;
        }
        else
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }
    }

    return 0;
}