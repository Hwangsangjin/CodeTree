#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

bool Cmp(const tuple<int, int, int>& A, const tuple<int, int, int>& B)
{
    if (get<0>(A) != get<0>(B))
        return get<0>(A) > get<0>(B);
    
    return get<1>(A) > get<1>(B);
}

int main()
{
    int N;
    cin >> N;

    tuple<int, int, int> Tuple[1000];
    
    for (int i = 0; i < N; ++i)
    {
        int Height, Weight;
        cin >> Height >> Weight;

        Tuple[i] = make_tuple(Height, Weight, i + 1);
    };

    sort(Tuple, Tuple + N, Cmp);
  
    for (int i = 0; i < N; ++i)
    {
        int Height, Weight, Number;
        cin >> Height >> Weight;
        tie(Height, Weight, Number) = Tuple[i];
        cout << Height << " " << Weight << " " << Number << "\n";
    }

    return 0;
}