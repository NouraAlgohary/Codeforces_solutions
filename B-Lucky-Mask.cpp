#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
long long mask(long long a)
{
	long long a2 =0;
	int i = 0;
	while (a>0)
	{
		int digit = a % 10;
		if (digit == 4 || digit == 7)
		{
			a2 += digit*pow(10,i);
			i++;
		}
		a = a / 10;
	}
	return a2;
}
int main()
{
	long long a, b;
	cin >> a >> b;
	a++;
	if (mask(a) == b&&mask(a)>a) cout << b << endl;
	else
	{
		for (long long j=a;; j++)
		{
			if (mask(j)==b)
			{
				cout << j << endl;
				break;
			}
		}
	}

	return 0;
}
