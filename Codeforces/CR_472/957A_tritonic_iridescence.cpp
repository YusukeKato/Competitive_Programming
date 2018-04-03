/*
 * Codeforces Round #472 Div.2
 * VK Cup 2018 Round 2
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string str;
	cin >> str;

	if(str.find("?") == -1)
	{
		cout << "No" << endl;
		return 0;
	}

	if(str.find("CC") != -1 || str.find("YY") != -1 || str.find("MM") != -1)
	{
		cout << "No" << endl;
		return 0;
	}

	for(int i = 0; i < n; i++)
	{
		if(str[i] == '?')
		{
			if((i > 0 || i < n-1) && str[i-1] == str[i+1])
			{
				cout << "Yes" << endl;
				return 0;		
			}
			if((i > 0 && str[i-1] == '?') || (i < n-1 && str[i+1] == '?'))
			{
				cout << "Yes" << endl;
				return 0;
			}
			if(i == 0 || i == n-1)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
	return 0;
}
