#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;
  bool flag = true;
  while(flag)
  {
    int a;
    cin >> a;
    if(a == 0) flag = false;
    else v.push_back(a);
  }
  int i = 1;
  for(auto x: v)
  {
    cout << "Case " << i << ": " << x << endl;
    i++;
  }

  return 0;
}
