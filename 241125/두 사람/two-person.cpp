#include <iostream>
using namespace std;

int main()
{
    int AAge, BAge;
    char AGender, BGender;

    cin >> AAge >> AGender;
    cin >> BAge >> BGender;

    cout << ((AAge >= 19 && AGender == 'M') || (BAge >= 19 && BGender == 'M'));
    return 0;
}