#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A < B && A < C) << " ";
    cout << (A == B && A == C); 
    return 0;
}