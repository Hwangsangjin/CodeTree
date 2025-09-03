#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int N;
    cin >> N;

    deque<int> Deque;
    
    for (int i = 1; i <= N; ++i)
        Deque.push_back(i);

    while (Deque.size() > 1)
    {
        Deque.pop_front();
        Deque.push_back(Deque.front());
        Deque.pop_front();
    }

    cout << Deque.front();

    return 0;
}