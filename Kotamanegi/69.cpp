#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N, H, W;
    cin >> N >> H >> W;
    string F[H];
    for(int i = 0; i < H; i++) cin >> F[i];

    for(int i = 1; i <= N; i++)
    {
        //col
        int count1 = 0;
        for(int p = 0; p < H; p++)
        {
            int point1 = 0;
            for(int q = 0; q < W; q++)
            {
                if(F[p][q] == '.') point1++;
                if(F[p][q] == '#' || q == W-1)
                {
                    int r1 = point1 / i;
                    count1 += r1;
                    point1 = 0;
                }
            }
        }
        cout << count1 << endl;
        /*
        int count2 = 0;
        for(int p = 0; p < W; p++)
        {
            int point2 = 0;
            for(int q = 0; q < H; q++)
            {
                if(F[q][p] == '.') point2++;
                if(F[q][p] == '#' || q == H-1)
                {
                    int r2 = point2 / i;
                    count2 += r2;
                    point2 = 0;
                }
            }
        }
        //judge
        if(count1 >= count2) cout << count1 << endl;
        else if(count1 < count2) cout << count2 << endl;
        */
    }
    return 0;
}
