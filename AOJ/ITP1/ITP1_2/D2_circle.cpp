#include <iostream>
using namespace std;

int main()
{
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  if(x < 0 || y < 0) cout << "No" << endl;
  else if(W-x>=r && H-y>=r) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
