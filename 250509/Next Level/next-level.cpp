#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main()
{
    tuple<string, int> User1 = make_tuple("codetree", 10);
    tuple<string, int> User2;

    string ID;
    int Level;
    cin >> ID >> Level;

    User2 = make_tuple(ID, Level);

    cout << "user " << get<0>(User1) << " lv " << get<1>(User1) << endl;
    cout << "user " << get<0>(User2) << " lv " << get<1>(User2) << endl;

    return 0;
}