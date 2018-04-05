/*
 * Educational Codeforces Round 41
 * Div. 2
 * /

#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int c[m] = {0};
  for(int i = 0; i < m; i++) cin >> c[i];

  int d[n] = {0};
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(c[i] == j+1) d[j]++;
    }
  }
  
  bool flag = true;
  int point = 0;
  while(flag)
  {
    for(int i = 0; i < n; i++) if(d[i] == 0) flag = false; 
    if(flag) for(int i = 0; i < n; i++) d[i]--;
    if(flag) point++;
  }

  cout << point << endl;
  return 0;
}
