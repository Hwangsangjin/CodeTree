#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double Array[N];
    double Sum = 0.0;

    for (int i = 0; i < N; ++i)
    {
        cin >> Array[i];
        Sum += Array[i];
    }

    double Avg = Sum / N;

    cout << fixed;
    cout.precision(1);
    cout << Avg << "\n";

    if (Avg >= 4.0)
        cout << "Perfect";
    else if (Avg >= 3.0)
        cout << "Good";
    else
        cout << "Poor";

    return 0;
}