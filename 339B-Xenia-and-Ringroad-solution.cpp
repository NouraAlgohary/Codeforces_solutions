#include<iostream>
using namespace std;
int main()
{
	int n, m, house[100050];
	long long int c = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> house[i];

	c = house[0] - 1;
	for (int i = 0; i < m-1; i++)
	{
		if (house[i] > house[i + 1])
		{
			c += n+house[i+1]-house[i];
		}
		else
		{
			c += house[i + 1] - house[i];
		}
	}

	cout << c << endl;
	return 0;
}
