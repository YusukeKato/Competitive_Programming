#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n] = {0};
    int xsub[n] = {0};
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) xsub[i] = x[i];

    sort(x, x+n);

    int L = n / 2;
    int mx1 = x[L-1];
    int mx2 = x[L];
    double mx = (mx1+mx2) / 2.0;
    for(int i = 0; i < n; i++)
    {
        if(double(xsub[i]) <= mx) cout << mx2 << endl;
        else if(double(xsub[i]) > mx) cout << mx1 << endl;
    }

    return 0;
}
