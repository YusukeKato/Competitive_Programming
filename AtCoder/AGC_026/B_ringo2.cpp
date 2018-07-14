#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    uint64_t a[T], b[T], c[T], d[T];
    for(int i=0; i<T; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    for(int i=0; i<T; i++)
    {
        int64_t min = b[i] + c[i];
        int64_t max = 2 * b[i];
        int64_t step = d[i] - b[i];
        if(a[i] < b[i]) cout << "No" << endl;
        else if(b[i] > d[i]) cout << "No" << endl;
        else if(step != 0)
        {
            int64_t n = (min-a[i]) / step;
            bool flag = true;
            for(int j=0; flag; j++)
            {
                int64_t res = a[i] + step*(n+j);
                if(res > b[i]+c[i] && res < 2*b[i])
                {
                    cout << "No" << endl;
                    flag = false;
                }
                if(res >= 2*b[i])
                {
                    cout << "Yes" << endl;
                    flag = false;
                }
            }
        }
        else if(step == 0)
        {
            int64_t p = a[i] % b[i];
            if(p < 0 || p > c[i]) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
        else cout << "Yes" << endl;
    }
    return 0;
}
