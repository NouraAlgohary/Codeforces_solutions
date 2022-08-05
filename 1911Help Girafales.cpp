#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string, string>list;
	string name, sign;
	int n, m,x,y,cnt;
	cin >> n;
	while (n != 0)
	{
		cnt = 0;
		while (n--)
		{
			cin >> name >> sign;
			list.insert(make_pair(name, sign));
		}
		cin >> m;
		while (m--)
		{
			x = 0;
			bool b = 1;
			int y = 1;
			cin >> name >> sign;
			if (list[name].size() == sign.size())
			{
				x = sign.size(); y = 0;
			}
			else if (list[name].size() - sign.size() == 1) x = sign.size();
			else if (sign.size() - list[name].size() == 1) x = list[name].size();
			else b=0;
			if (b)
			{
				for (int i = 0; i < x; i++)
				{
					if (list[name][i] != sign[i])
					{
						y++;
						if (y == 2) {
							cnt++;
							break;
						}
					}
				}
			}
			else cnt++;
		}
		cout << cnt << endl;
			cin >> n;
	}


	return 0;
}
