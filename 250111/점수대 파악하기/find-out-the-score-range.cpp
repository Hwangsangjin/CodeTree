#include <iostream>
using namespace std;

int main()
{
    int Array[11] = {};
    int Count = 100;

    while (Count--)
    {
        int Score;
        cin >> Score;

        if (Score == 0)
            break;

        if (Score < 10)
            continue;

        Array[Score / 10]++; 
    }
    
    for (int i = 10; i > 0; --i)
        cout << i * 10 << " - " << Array[i] << "\n";

    return 0;
}