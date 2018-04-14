#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];
    int total_p = 0;
    int total_m = 0;
    for(int i = 0; i < m; i++)
    {
        if(x < a[i]) total_p++;
        else if(x > a[i]) total_m++;
    }
    if(total_p <= total_m) cout << total_p << endl;
    else if(total_p > total_m) cout << total_m << endl;

    return 0;
}
