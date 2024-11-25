#include <iostream>
using namespace std;

int main()
{
    int M;
    cin >> M;

    if (12 <= M || M <= 2)
    {
        cout << "Winter";
    }
    else if (M <= 5)
    {
        cout << "Spring";
    }
    else if (M <= 8)
    {
        cout << "Summer";
    }
    else
    {
        cout << "Fall";
    }

    return 0;
}