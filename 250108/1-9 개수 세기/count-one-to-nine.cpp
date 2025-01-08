#include <iostream>
using namespace std;

int main()
{
    int Array[100];
    int Count[10] = {};

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> Array[i];
    
    for (int i = 0; i < N; ++i)
    {
        if (Array[i] >= 1 && Array[i] <= 9)
            Count[Array[i]]++;
    }
        
    for (int i = 1; i < 10; ++i)
        cout << Count[i] << "\n";

    return 0;
}