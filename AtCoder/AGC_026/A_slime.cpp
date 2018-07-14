#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) cin >> a[i];

    bool b[10000] = {false};
    for(int i=0; i<N; i++) b[i] = true;
    
    int tmp = a[0];
    int count = 0;
    for(int i=1; i<N; i++)
    {
        if(a[i] == tmp)
        {
            bool flag = true;
            for(int j=0; j<10000 && flag; j++)
            {
                if(!b[j])
                {
                    a[i] = j;
                    b[j] = true;
                    count++;
                    flag = false;
                }
            }
        }
        tmp = a[i];
    }

    cout << count;
    return 0;
}
