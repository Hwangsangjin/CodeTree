#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    tuple<int, int, int, string> Tuple[10];

    for (int i = 0; i < N; ++i)
    {
        int Kor, Eng, Math;
        string Name;
        cin >> Name >> Kor >> Eng >> Math;

        Tuple[i] = make_tuple(-Kor, -Eng, -Math, Name);
    };

    sort(Tuple, Tuple + N);
  
    for(int i = 0; i < N; i++)
    {
        int Kor, Eng, Math;
        string Name;
        tie(Kor, Eng, Math, Name) = Tuple[i];
        cout << Name << " " << -Kor << " " << -Eng << " " << -Math << "\n";
    }

    return 0;
}