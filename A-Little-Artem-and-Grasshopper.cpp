#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, d[100000];
	string ch;
	long long res=0;
	bool b = 0;
	cin >> n >> ch;
	for (int i = 0; i < n; i++)
		cin >> d[i];

	for (int i = 0; i < n; i++)
	{
		if (ch[res] == '<')
			res -= d[res];
		else
			res += d[res];

		if (res < 0 || res >= n)
		{
			b = 1;
			break;
		}

	}
	if(b)
		cout << "FINITE" << endl;
	else
		cout << "INFINITE" << endl;
	return 0;
}
