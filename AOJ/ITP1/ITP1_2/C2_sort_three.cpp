#include <iostream>
using namespace std;

int main()
{
  int t = 3;
  int a[t];
  for(int i = 0; i < t; i++) cin >> a[i];

  for(int i = 0; i < t-1; i++)
  {
    for(int j = 0; j < t-1; j++)
    {
      if(a[j] > a[j+1])
      {
        int tmp = a[j];
        a[j] = a[j+1];
        a[j+1] = tmp;
      }
    }
  }

  cout << a[0] << " " << a[1] << " " << a[2] << endl;

  return 0;
}
