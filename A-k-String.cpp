#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<char, int>sub;
	int k;
	string s;
	cin >> k >> s;
	sub.insert({ s[0],1 });
	for (int i = 1; i < s.size(); i++)
	{
		if (sub.count(s[i]) == 0)
			sub.insert({ s[i],1 });
		else
			sub.at(s[i])++;
	}
	bool b = 1;
	for (auto it = sub.begin(); it != sub.end(); it++)
	{
		if ((it->second) % k != 0)
		{
			b = 0;
			break;
		}
	}
	if (s.size() == 1 || s.size() == 2||sub.size()==1)
		cout << s << endl;
	else if (b)
	{
		int x = k;
	     while (x--)
		{
			for (auto it = sub.begin(); it != sub.end(); it++)
			{
				int y =it->second / k;
				while (y--)
					cout << it->first;
			}
		}
	}
	else
		cout << "-1";
	cout << endl;
	return 0;
}
