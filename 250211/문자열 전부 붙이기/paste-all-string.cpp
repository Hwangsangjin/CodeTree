#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Str;

    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i)
    {
        string Input;
        cin >> Input;

        Str += Input;
    }
    
    cout << Str;
    return 0;
}