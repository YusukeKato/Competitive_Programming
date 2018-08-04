#include <iostream>
using namespace std;

int main()
{
    int f, s;
    cin >> f >> s;
    int count = 0;
    bool flag = true;
    while(flag)
    {
        f -= 2;
        s -= 1;
        if(f < 0 || s < 0)
        {
            if(count % 2 == 0)
            {
                cout << "K" << endl;
            }
            else
            {
                cout << "O" << endl;
            }
            flag = false;
        }
        count += 1;
    }
    return 0;
}
