#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{
    pair<string, int> Pair[2];

    string ProductName;
    int Code;
    cin >> ProductName >> Code;

    Pair[0] = make_pair("codetree", 50);
    Pair[1] = make_pair(ProductName, Code);

    for (int i = 0; i < 2; ++i)
        cout << "product " << Pair[i].second << " is " << Pair[i].first << "\n";

    return 0;
}