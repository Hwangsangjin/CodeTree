#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S1, S2;
    cin >> S1 >> S2;

    size_t N1 = S1.length();
    size_t N2 = S2.length();

    if (N1 > N2)
        cout << S1 << " " << N1;
    else if (N1 < N2)
        cout << S2 << " " << N2;
    else
        cout << "same";

    return 0;
}