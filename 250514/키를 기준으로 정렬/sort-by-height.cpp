#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

bool Cmp(const tuple<string, int, int>& A, const tuple<string, int, int>& B)
{
    return get<1>(A) < get<1>(B);
}

int main()
{
    int N;
    cin >> N;

    tuple<string, int, int> Tuple[10];

    for (int i = 0; i < N; ++i)
    {
        string Name;
        int Height, Weight;
        cin >> Name >> Height >> Weight;

        Tuple[i] = make_tuple(Name, Height, Weight); 
    }

    sort(Tuple, Tuple + N, Cmp);
  
    for (int i = 0; i < N; ++i)
    {
        string Name;
        int Height, Weight;
        tie(Name, Height, Weight) = Tuple[i];

        cout << Name << " " << Height << " " << Weight << "\n";
    }

    return 0;
}