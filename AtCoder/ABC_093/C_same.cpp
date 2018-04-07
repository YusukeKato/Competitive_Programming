#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int count = 0;
  bool flag = false;
  while(!flag)
  {
    if(b - a >= 2 || c - a >= 2) a += 2;
    else if(a - b >= 2 || c - b >= 2) b += 2;
    else if(a - c >= 2 || b - c >= 2) c += 2;
    else if(a - b >= 1 && a - c >= 1)
    {
      b += 1;
      c += 1;
    }
    else if(b - a >= 1 && b - c >= 1)
    {
      a += 1;
      c += 1;
    }
    else if(c - a >= 1 && c - b >= 1)
    {
      a += 1;
      b += 1;
    }
    else if((a==b&&a-c==1)||(a==c&&a-b==1)||(b==c&&b-a==1))
    {
      count += 2;
      flag = true;
    }
    else if(a == b && b == c) flag = true;
    if(!flag) count++;
  }

  cout << count << endl;
  return 0;
}
