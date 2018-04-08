#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

void output(int a)
{
  ofstream outputfile("test2.txt", ios::app);
  //ofstream outputfile("test2.txt");
  outputfile << a << endl;
  outputfile.close();
}

int main()
{
  int t;
  cin >> t;
  int a[t] = {0};
  for(int i = 0; i < t; i++)
  {
    cin >> a[i];
    cout << "55 55" << endl;

    int cell[1001][2] = {0};
    bool flag = true;
    int x = 55;
    int y = 55;
    // Case #t: 各ケース
    for(int j = 0; flag && j <= 1000; j++)
    {
      cin >> cell[j][0] >> cell[j][1];
      //あるマスを起点に9マスが埋まっているか
      bool flag2[9] = {false};
      int fl = 0;
      for(int p = -1; p <= 1; p++)
      {
        for(int q = -1; q <= 1; q++)
        {
          for(int k = 0; k <= j; k++)
          {
            if(x+p==cell[k][0] && y+q==cell[k][1])
            {
              flag2[fl] = true;
            }
          } 
          fl++;
        }
      }
      bool flag4 = true;
      for(int s = 0; s < 9; s++)
      {
        if(flag2[s] == false) flag4 = false;
      }
      if(flag4)
      {
        //暇つぶし（起点となるマスの移動）
        if(x == 55 && y == 55)x = 58;
        else if(x == 58 && y == 55) y = 58;
        else if(x == 58 && y == 58) x = 55;
        else if(x == 55 && y == 58) y = 61;
        else if(x == 55 && y == 61) x = 58;
        else if(x == 58 && y == 61) x = 61;
        else if(x == 61 && y == 61) y = 58;
        else if(x == 61 && y == 58) y = 55;
        else if(x == 61 && y == 55) x = 64;
        else if(x == 64 && y == 55) y = 58;
        else if(x == 64 && y == 58) y = 61;
        else if(x == 64 && y == 61) x = 67;
        else if(x == 67 && y == 61) y = 58;
        else if(x == 67 && y == 58) y = 55;
        else if(x == 67 && y == 55) y = 52;
        else if(x == 67 && y == 52) x = 64;
        else if(x == 64 && y == 52) x = 61;
        else if(x == 61 && y == 52) x = 58;
        else if(x == 58 && y == 52) x = 55;
        else if(x == 55 && y == 52) x = 53;
        else if(x == 53 && y == 52) y = 55;
        else if(x == 53 && y == 55) y = 58;
        else if(x == 53 && y == 58) y = 61;
        else
        {
          x = 53;
          y = 61;
        }
      }
 
      if(cell[j][0] <= 0) flag = false;
      else
      {
        cout << to_string(x)+" "+to_string(y) << endl;
      }
    }
  }
  return 0;
}
