#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{
    pair<string, int> User1 = make_pair("codetree", 10);
    pair<string, int> User2;

    string ID;
    int Level;
    cin >> ID >> Level;

    User2 = make_pair(ID, Level);

    cout << "user " << User1.first << " lv " << User1.second << endl;
    cout << "user " << User2.first << " lv " << User2.second << endl;

    return 0;
}