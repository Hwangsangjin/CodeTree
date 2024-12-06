#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ClassroomCount = 0;
    int HallwayCount = 0;
    int RestroomCount = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 12 == 0)
        {
            RestroomCount++;
        }
        else if (i % 3 == 0)
        {
            HallwayCount++;
        }
        else if (i % 2 == 0)
        {
            ClassroomCount++;
        }
    }

    cout << ClassroomCount << " " << HallwayCount << " " << RestroomCount;
    return 0;
}