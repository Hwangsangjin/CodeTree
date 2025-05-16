#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

bool Cmp(const tuple<string, int, int, int>& A, const tuple<string, int, int, int>& B)
{
    string Name1;
    int Kor1, Eng1, Math1;
    tie(Name1, Kor1, Eng1, Math1) = A;

    string Name2;
    int Kor2, Eng2, Math2;
    tie(Name2, Kor2, Eng2, Math2) = B;

    return Kor1 + Eng1 + Math1 < Kor2 + Eng2 + Math2;
}

int main()
{
    int N;
    cin >> N;

    tuple<string, int, int, int> Tuple[10];
    
    for (int i = 0; i < N; ++i)
    {
        string Name;
        int Kor, Eng, Math;
        cin >> Name >> Kor >> Eng >> Math;

        Tuple[i] = make_tuple(Name, Kor, Eng, Math);
    };

    sort(Tuple, Tuple + N, Cmp);
  
    for(int i = 0; i < N; i++)
    {
        string Name;
        int Kor, Eng, Math;
        tie(Name, Kor, Eng, Math) = Tuple[i];
        cout << Name << " " << Kor << " " << Eng << " " << Math << "\n";
    }

    return 0;
}