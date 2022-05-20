#include<iostream>
using namespace std;
int main()
{
	int n, m, k, player[1001],army=0,c=0;
	cin >> n >> m >> k;
	for (int i = 0; i <= m; i++)
	{
		cin>>player[i];
	}
	for (int i = 0; i < m; i++)
	{
		c = 0;
		for (int j = 0; j < n; j++)
		{
			if (((player[i] >> j) & 1) != ((player[m] >> j) & 1))
			        c++;
		}
		if (c <= k)
			army++;
	}
	cout << army << endl;
	return 0;
}
