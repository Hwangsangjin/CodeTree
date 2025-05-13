#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    tuple<string, string, string> Tuple[10];

    for (int i = 0; i < N; ++i)
    {
        string Name, Address, Region;
        cin >> Name >> Address >> Region;
        Tuple[i] = make_tuple(Name, Address, Region);
    }   

    tuple<string, string, string> Latest = Tuple[0];
    for (int i = 1; i < N; ++i)
    {
        if (std::get<0>(Tuple[i]) > std::get<0>(Latest))
            Latest = Tuple[i];
    }

    std::cout << "name " << std::get<0>(Latest) << '\n';
    std::cout << "addr " << std::get<1>(Latest) << '\n';
    std::cout << "city " << std::get<2>(Latest);

    return 0;
}