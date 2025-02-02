#include <iostream>
#include <string>
using namespace std;

int main()
{
     string S1, S2, S3;
    cin >> S1 >> S2 >> S3;

    size_t N1 = S1.length();
    size_t N2 = S2.length();
    size_t N3 = S3.length();

    size_t Max = N1;
    if (Max < N2)
        Max = N2;
    if (Max < N3)
        Max = N3;

    size_t Min = N1;
    if (Min > N2)
        Min = N2;
    if (Min > N3)
        Min = N3;

    cout << Max - Min;
    return 0;
}