#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int cost(string p)
{
  int c = 0;
  int damage = 0;
  for(int j = 0; j < p.length(); j++)
  {
    if(p[j] == 'C') c++;
    else if(p[j] == 'S') damage += 1 * pow(2.0, c);
  }
  return damage;
}

int main()
{
  int t = 0;
  cin >> t;
  int d[t] = {0};
  string p[t];
  for(int i = 0; i < t; i++) cin >> d[i] >> p[i];

  for(int i = 0; i < t; i++)
  {
    int damage = cost(p[i]);
    if(d[i] >= damage) cout << "Case #" << i+1 << ": " << 0 << endl;
    else
    {
      int count = 0;
      bool flag = false;
      for(int j = p[i].length()-1; !flag && j > 0; j--)
      {
        if(p[i][j] == 'S' && p[i][j-1] == 'C')
        {
          p[i][j] = 'C';
          p[i][j-1] = 'S';
          j = p[i].length();
          count++;
          damage = cost(p[i]);
          if(d[i] >= damage)
          {
            cout << "Case #" << i+1 << ": " << count << endl;
            flag = true;
          }
        }
      }
      if(!flag) cout << "Case #" << i+1 << ": " << "IMPOSSIBLE" << endl;
    }
  }

  return 0;
}
