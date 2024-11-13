#include <iostream>
using namespace std;

int main()
{
    int Width, Height;
    cin >> Width >> Height;

    Width += 8;
    Height *= 3;

    cout << Width << endl;
    cout << Height << endl;
    cout << Width * Height;
    return 0;
}