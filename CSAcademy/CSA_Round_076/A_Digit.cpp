#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int digit_func(int x)
{
    int sum = 0;
    int y = x;
    while(x)
    {
        int dig = x % 10;
        sum += dig;
        x /= 10;
    }
    y -= sum;
    return y;
}

int main()
{
    int x;
    cin >> x;
    int count = 0;
    while(x > 0)
    {
      x = digit_func(x);
      count++;
    }
    count++;
    cout << count << endl;
    return 0;
}
