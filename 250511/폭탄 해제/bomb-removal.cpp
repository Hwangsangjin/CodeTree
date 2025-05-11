#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main()
{
    string Code;
    char Color;
    int Second;
    cin >> Code >> Color >> Second;

    tuple<string, char, int> Tuple = make_tuple(Code, Color, Second);

    cout << "code : " << get<0>(Tuple) << "\n";
    cout << "color : " << get<1>(Tuple) << "\n";
    cout << "second : " << get<2>(Tuple);

    return 0;
}