#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  string ans[t];
  for(int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
    int p[n];
    for(int j = 0; j < n; j++) cin >> p[j];
    
    for(int j = 0; j < n; j++)
    {
      for(int k = 0; k < n-2; k++)
      {
        if(p[k] > p[k+2])
        {
          int tmp = p[k];
          p[k] = p[k+2];
          p[k+2] = tmp;
        }
      }
    }

    bool flag = true;
    int num = 0;
    for(int j = 0; flag && j < n-1; j++)
    {
      if(p[j] > p[j+1])
      {
        flag = false;
        num = j;
      }
    }
    if(flag) ans[i] =  "Case #" + to_string(i+1) + ": OK"; 
    else if(!flag) ans[i] = "Case #" + to_string(i+1) + ": " + to_string(num);
  }

  for(int i = 0; i < t; i++) cout << ans[i] << endl;
}
