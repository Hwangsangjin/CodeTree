#include <iostream>
using namespace std;

void Answer(int N)
{
    if (N == 0)
        return;
    
    Answer(N - 1);
    cout << "HelloWorld\n";
}

int main()
{
    int N;
    cin >> N;

    Answer(N);
    return 0;
}