#include <iostream>
using namespace std;

int main()
{
    int Midterm, FinalExam;
    cin >> Midterm >> FinalExam;

    if (90 <= Midterm && 95 <= FinalExam)
    {
        cout << 100000;
    }
    else if (90 <= Midterm && 90 <= FinalExam)
    {
        cout << 50000;
    }
    else
    {
        cout << 0;
    }

    return 0;
}