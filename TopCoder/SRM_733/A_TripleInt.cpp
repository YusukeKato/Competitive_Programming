#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

class MinimizeAbsoluteDifferenceDiv2
{
    public:
    vector<int> findTriple(int x, int y, int z)
    {
        double a, b, c;
        a = double(x);
        b = double(y);
        c = double(z);
        double d = abs((a/b)-c);
        int num = 0;
        if(d > abs((a/c)-b))
        {
            num = 1;
            d = abs((a/c)-b);
        }
        if(d > abs((b/a)-c))
        {
            num = 2;
            d = abs((b/a)-c);
        }
        if(d > abs((b/c)-a))
        {
            num = 3;
            d = abs((b/c)-a);
        }
        if(d > abs((c/a)-b))
        {
            num = 4;
            d = abs((c/a)-b);
        }
        if(d > abs((c/b)-a))
        {
            num = 5;
            d = abs((c/b)-a);
        }
        vector<int> res;
        switch(num)
        {
            case 0:
                res.push_back(0);
                res.push_back(1);
                res.push_back(2);
                break;
            case 1:
                res.push_back(0);
                res.push_back(2);
                res.push_back(1);
                break;
            case 2:
                res.push_back(1);
                res.push_back(0);
                res.push_back(2);
                break;
            case 3:
                res.push_back(1);
                res.push_back(2);
                res.push_back(0);
                break;
            case 4:
                res.push_back(2);
                res.push_back(0);
                res.push_back(1);
                break;
            case 5:
                res.push_back(2);
                res.push_back(1);
                res.push_back(0);
                break;
        }
        return res;
    }
};

int main()
{
    MinimizeAbsoluteDifferenceDiv2 a;
    vector<int> res = a.findTriple(1, 2, 3); 

    return 0;
}
