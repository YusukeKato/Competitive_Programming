#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int total = 0;
    int total2 = 0;
    for(int i = 0; i < n; i++) total += a[i];
    for(int i = 0; i < n; i++)
    {
        total2 += a[i];
        if(total2 >= total/2)
        {
            cout << i+1 << endl;
            return 0;
        }   
    }

    return 0;
}
