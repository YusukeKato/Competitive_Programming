#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> weight;
    weight.push_back(1);
    for(int i = n/2; i > 0; i--)
    {
        int count = 0;
        int n2 = n;
        while(n2 >= 0)
        {
            n2 -= i;
            if(n2 > 0) count++;
            if(n2 % i == 0) count++;
        }
        bool flag = true;
        for(int j = 0; j < weight.size(); j++)
        {
            if(weight[j] == count) flag = false;
        }
        if(flag) weight.push_back(count);
    }
    cout << weight.size() << endl;

    return 0;
}
