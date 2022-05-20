#include <iostream>
#include<map>
#include<iomanip>
using namespace std;

int main()
{
	multimap<double,int,greater<double>>mp;
	double calc1 , calc2, n, t1, t2, k, a, b;
	cin >> n >> t1 >> t2 >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

			calc1 = b*t1-b *t1* k /100  + a * t2;
			calc2 = a*t1-a *t1* k /100  + b * t2;

			if (calc1 > calc2)
				mp.insert({ calc1 ,i + 1 });
			else
				mp.insert({ calc2 ,i + 1 });
	}

	auto it = mp.begin();
	for (; it != mp.end(); it++)
		cout <<it->second << " " << fixed << setprecision(2) << it->first << endl;
	return 0;
}
