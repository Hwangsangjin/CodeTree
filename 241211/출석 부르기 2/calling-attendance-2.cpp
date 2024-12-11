#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        int N;
        cin >> N;

        switch (N)
        {
        case 1:
            cout << "John\n";
            break;
        case 2:
            cout << "Tom\n";
            break;
        case 3:
            cout << "Paul\n";
            break;
        case 4:
            cout << "Sam\n";
            break;
        default:
            cout << "Vacancy\n";
            return 0;
        }
    }
}