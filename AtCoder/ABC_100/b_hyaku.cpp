#include <iostream>
using namespace std;

int main()
{
    int D, N;
    cin >> D >> N;

    if(D == 0)
    {
        if(N == 100)
        {
            cout << "101";
        }
        else
        {
            cout << N;
        }
    }
    else if(D == 1)
    {
        if(N == 100)
        {
            cout << "10100";
        }
        else
        {
            int a1 = 100 * N;
            cout << a1;
        }
    }
    else if(D == 2)
    {
        if(N == 100)
        {
            cout << "1010000";
        }
        else
        {
            int a2 = 10000 * N;
            cout << a2;
        }
    }
    return 0;
}
