#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> rotated(int n, vector<string> map_ori)
{
    vector<string> map = map_ori;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            map[i][j] = map_ori[j][n-i-1];
        }
    }
    return map;
}

vector<string> inverted(int n, vector<string> map_ori)
{
    vector<string> map = map_ori;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            map[i][j] = map_ori[j][i];
        }
    }
    return map;
}

void display(int n, vector<string> map)
{
    for(int i = 0; i < n; i++) cout << map[i] << endl;
    cout << endl;
}

int main()
{
    // Input
    int n;
    cin >> n;
    vector<string> map1;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        map1.push_back(str);
    }

    vector<string> map2;
    for(int i = 0; i < n; i++)
    {
         string str;
         cin >> str;
         map2.push_back(str);
    }
    // Output
    bool flag = false;
    for(int i = 0; !flag && i < 7; i++)
    {
        if(map1 == map2) flag = true;
        vector<string> map;
        if(i == 3) map = inverted(n, map1);
        else if(i != 3) map = rotated(n, map1);
        map1.clear();
        map1 = map;
    }
    if(flag) cout << "Yes" << endl;
    else if(!flag) cout << "No" << endl;
        
    return 0;
}
