#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        //Input
        int a[4] = {0};
        for(int j = 0; j < 4; j++) cin >> a[j];
        string str[a[0]];
        for(int j = 0; j < a[0]; j++) cin >> str[j];
        //Output
        bool flag = true;
        for(int j = 0; flag && j < a[0]-1; j++)
        {
            for(int k = 0; flag && k < a[1]-1; k++)
            {
                int total[4] = {0};
                //1
                for(int p1 = 0; p1 <= j; p1++)
                {
                    for(int q1 = 0; q1 <= k; q1++)
                    {
                        if(str[p1][q1] == '@') total[0]++;
                    }
                }
                //2
                for(int p2 = 0; p2 <= j; p2++)
                {
                    for(int q2 = k+1; q2 < a[1]; q2++)
                    {
                        if(str[p2][q2] == '@') total[1]++;
                    }
                }
                //3
                for(int p3 = j+1; p3 < a[0]; p3++)
                {
                    for(int q3 = 0; q3 <= k; q3++)
                    {
                        if(str[p3][q3] == '@') total[2]++;
                    }
                }
                //4
                for(int p4 = j+1; p4 < a[0]; p4++)
                {
                    for(int q4 = k+1; q4 < a[1]; q4++)
                    {
                        if(str[p4][q4] == '@') total[3]++;
                    }
                }
                if(total[0] == total[1] && total[1] == total[2] && total[2] == total[3])
                {
                    cout << "Case #" << i+1 << ": POSSIBLE" << endl;
                    flag = false;
                }
            }
        }
        if(flag) cout << "Case #" << i+1 << ": IMPOSSIBLE" << endl;
    }
    return 0;
}
