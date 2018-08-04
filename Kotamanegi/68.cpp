#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];

    if(M == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int count_val = 0;
    int count = 0;
    bool flag = true;
    while(flag)
    {
        int max = 0;
        int max_num = 0;
        for(int i = 0; i < N; i++)
        {
            if(max < A[i])
            {
                max = A[i];
                max_num = i;
            }
        }
        count += 1;
        count_val += max;
        A[max_num] = 0;
        if(M <= count_val)
        {
            cout << count << endl;
            flag = false;
        }
    }
    return 0;
}
