/*
 * Atcoder Grand Contest 022
 * rank:A(300)
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	const int max = 26;

	if(str.length() < max)
	{
		bool a[max] = {false};
		for(int i = 0; i < str.length(); i++) a[str[i]-'a'] = true;
		for(int i = 0; i < max; i++)
		{
			if(!a[i])
			{
				cout << str + (char)('a'+i) << endl;
				return 0;
			}
		}
	}

	bool flag = true;
	int num = 0;
	for(int i = max-1; flag && i > 0; i--)
	{
		if(str[i-1] < str[i])
		{
			flag = false;
			num = i;
		}
	}

	if(num == 0)
	{
		cout << -1 << endl;
		return 0;
	}

	bool a[max] = {false};
	for(int i = num; i < max; i++) if(str[num-1] < str[i]) a[str[i]-'a'] = true;
	string q;
	for(int i = 0; i < max; i++)
	{
		if(a[i])
		{
			q = 'a'+i;
			i += max; // exit for
		}	
	}

	cout << str.substr(0, num-1) + q << endl;
	return 0;
}
