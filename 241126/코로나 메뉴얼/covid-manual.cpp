#include <iostream>
using namespace std;

int main()
{
    char ASymptom, BSymptom, CSymptom;
    int ATemperature, BTemperature, CTemperature;

    cin >> ASymptom >> ATemperature;
    cin >> BSymptom >> BTemperature;
    cin >> CSymptom >> CTemperature;

    int Count = 0;

    if (ASymptom == 'Y' && ATemperature >= 37)
    {
        Count++;
    }

    if (BSymptom == 'Y' && BTemperature >= 37)
    {
        Count++;
    }

    if (CSymptom == 'Y' && CTemperature >= 37)
    {
        Count++;
    }

    cout << (Count >= 2 ? 'E' : 'N');
    return 0;
}