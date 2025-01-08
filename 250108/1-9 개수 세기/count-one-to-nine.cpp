#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Array[100];
    int CountArray[10] = {};

    for (int i = 0; i < N; ++i)
    {
        cin >> Array[i];
        CountArray[Array[i]]++;
    }
    
    for (int i = 1; i < 10; ++i)
        cout << CountArray[i] << "\n";

    return 0;
}