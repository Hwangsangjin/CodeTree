#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        string Input;
        cin >> Input;

        if (Input == "END")
            break;

        for (int i = Input.length() - 1; i >= 0; --i)
            cout << Input[i];
            
        std::cout << "\n";
    }

    return 0;
}