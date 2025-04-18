#include <iostream>
using namespace std;

void Answer(int N)
{
    if (N == 0)
        return;

    for (int i = 0; i < N; ++i)
        cout << "* ";
    cout << "\n";

    Answer(N - 1);

    for (int i = 0; i < N; ++i)
            cout << "* ";
    cout << "\n";
}

int main()
{
    int N;
    cin >> N;

    Answer(N);
    return 0;
}