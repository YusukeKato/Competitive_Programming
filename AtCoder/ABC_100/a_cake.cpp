#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    if(A > 8 || B > 8)
    {
        cout << ":(";
        return 0;
    }

    cout << "Yay!";
    return 0;
}
