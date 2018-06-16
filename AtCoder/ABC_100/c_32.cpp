#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N] = {0};
    for(int i = 0; i < N; i++) cin >> a[i];

    int count = 0;
    for(int i = 0; i < N; i++)
    {
        bool flag = true;
        while(flag)
        {
            if(a[i] % 2 == 0)
            {
                count++;
                a[i] /= 2;
            }
            else
            {
                flag = false;
            }
        }
    }

    cout << count;
    return 0;
}
