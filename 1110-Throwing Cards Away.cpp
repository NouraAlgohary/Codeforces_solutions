#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int>v;
	int n;
	cin >> n;
	while (n != 0)
	{
		for (int i = 1; i <= n; i++) v.push_back(i);
		cout << "Discarded cards: ";
		while (v.size() > 1)
		{
			if (v.size() > 2)
				cout << v.front() << ", ";
			else
				cout << v.front();
			v.erase(v.begin());
			v.push_back(v[0]);
			v.erase(v.begin());
		}
		cout << endl;
		cout << "Remaining card: " << v[0] << endl;
		v.erase(v.begin());
		cin >> n;
	}
}
