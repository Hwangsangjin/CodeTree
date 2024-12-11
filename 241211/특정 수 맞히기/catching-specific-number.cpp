#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int N;
        cin >> N;

        if (N == 25)
        {
            cout << "Good\n";
            break;
        }

        cout << (N < 25 ? "Higher\n" : "Lower\n");
    }

    return 0;
}