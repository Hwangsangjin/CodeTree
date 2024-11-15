#include <iostream>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    const int BMI = (10000 * W) / (H * H);
    cout << BMI << endl;

    if (BMI >= 25)
        cout << "Obesity";

    return 0;
}