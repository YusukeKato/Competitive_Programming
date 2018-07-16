#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    int b[k];
    int bval[k];
    for(int i=0; i<k; i++) b[i] = -1;
    for(int i=0; i<k; i++) bval[i] = -1;

    for(int i=0; i<k; i++)
    {
        int max = 0;
        for(int j=0; j<n; j++)
        {
            if(max < a[j])
            {
                //cout << "i:" << i << " " << "j:" << j << "max:" << max << endl;
                //cout << "a[j]:" << a[j] << endl;
                bool flag = true;
                for(int m=0; m<k; m++)
                {
                    if(b[m] == j)
                    {
                        flag = false;
                    }
                }
                if(flag)
                {
                    max = a[j];
                    b[i] = j;
                    bval[i] = a[j];
                }
            }
        }
    }

    //for(int i=0; i<k; i++) cout << "b:" << b[i] << " ";
    //cout << endl;
    //for(int i=0; i<k; i++) cout << "bval:" << bval[i] << " ";
    //cout << endl;

    int total = 0;
    for(int i=0; i<k; i++) total += bval[i];
    cout << total << endl;

    int count = 0;
    for(int i=0; i<n; i++)
    {
        count++;
        for(int j=0; j<k; j++)
        {
            if(i == b[j])
            {
                cout << count << " ";
                count = 0;
            }
        }
    }
    return 0;
}
