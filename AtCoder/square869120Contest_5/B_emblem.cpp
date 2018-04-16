#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    // Input
    int n, m;
    cin >> n >> m;
    double x[n];
    double y[n];
    double r[n];
    double x2[m];
    double y2[m];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i] >> r[i];
    for(int i = 0; i < m; i++) cin >> x2[i] >> y2[i];
    // Output
    if(m == 0)
    {
        sort(r, r+n);
        cout << r[0] << endl;
        return 0;
    }
    double dif = 9999999.9;
    for(int i = 0; i < m; i++)
    {
        double xx1 = x2[i];
        double yy1 = y2[i];
        for(int j = 0; j < n+m; j++)
        {
            double xx2 = 0;
            double yy2 = 0;
            if(j < n)
            {
                xx2 = x[j];
                yy2 = y[j];
            }
            else if(j < n+m)
            {
                xx2 = x2[j-n];
                yy2 = y2[j-n];
            }
            double px = pow(xx2-xx1, 2.0);
            double py = pow(yy2-yy1, 2.0);
            double dif2 = sqrt(px+py);
            if(j < n) dif2 -= r[j];
            else dif2 /= 2.0;
            if(dif > dif2 && i != j-n)
            {
                dif = dif2;
            }
        }
    }
    sort(r, r+n);
    if(dif > r[0] && n > 0) dif = r[0];
    cout << fixed << setprecision(12) << dif << endl;
    return 0;
}
