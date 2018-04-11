#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    char s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    int count = 0;
    char c = '*';
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '.')
        {
            if(c == '*' || c == '.')
            {
                if(a == 0 && b > 0) c = 'B';
                else if(b == 0 && a > 0) c = 'A';
                else if(a <= 0 && b <= 0) c = '.';
                else if(a >= b) c = 'A';
                else if(a < b) c = 'B';
            }
            else if(c == 'A' && b > 0) c = 'B';
            else if(c == 'B' && a > 0) c = 'A';
            else if(a <= 0 && b <= 0) c = '.';
            else c = '.';
            if(c == 'A') a -= 1;
            else if(c == 'B') b -= 1;
            if(c == 'A' || c == 'B') count++;
        }
        else if(s[i] == '*') c = '*';
    }
    cout << count << endl;
    return 0;
}
