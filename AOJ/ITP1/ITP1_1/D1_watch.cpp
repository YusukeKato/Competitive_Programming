#include <iostream>
using namespace std;

int main()
{
  int time;
  cin >> time;
  
  int h, m, s;  
  s = time % 60;
  m = (time / 60) % 60;
  h = time / 60 / 60;

  cout << h << ":" << m << ":" << s << endl;
  return 0;
}
