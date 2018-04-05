/*
 * CS Academy Round 75
 * 04/06/2018
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int d, t, v1, v2;
  cin >> d >> t >> v1 >> v2;

  int x = d;
  x -= (v1 - v2) * t;
  if(x < 0)
  {
    float sub = (float)d / ((float)v1 - (float)v2);
    cout << ceil(sub) << endl;
  }
  else
  {
    float sub = (float)x / (float)v1;
    cout << t + ceil(sub) << endl; 
  }
  return 0;
}
