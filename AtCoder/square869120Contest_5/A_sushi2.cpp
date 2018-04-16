#include <iostream>
using namespace std;

int main()
{
    // Input
    int n, t;
    cin >> n >> t;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    // Output
    int time = 0;
    int total = 0;
    for(int i = 0, j = 0; i < n; i++)
    {
        if(time > a[i])
        {
             j++;
             total = t*j;
             time = 0;
        }
        time = a[i];
        if(i == n-1) total += time;
    }

    cout << total << endl;
    return 0;
}
