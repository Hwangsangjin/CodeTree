#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int A, B;
        char C;
        
        cin >> A >> B >> C;
        cout << A * B << endl;

        if (C == 'C')
            break;
    }

    return 0;
}