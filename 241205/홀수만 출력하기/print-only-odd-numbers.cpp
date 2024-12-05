#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int Number;
        cin >> Number;

        if (Number % 2 == 1 && Number % 3 == 0)
        {
            cout << Number << endl;
        }
    }

    return 0;
}