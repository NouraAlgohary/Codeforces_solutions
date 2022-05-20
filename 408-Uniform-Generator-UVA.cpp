#include<bits/stdc++.h>
#include<set>
using namespace std;
int countDigits(int num)
{
	int c = 0;
	while (num > 0)
	{
		c++;
		num /= 10;
	}
	return c;
}
int main()
{
	set<int>seed;
	int step, mod,seedi0,seedi;
	while (cin >> step >> mod)
	{
	    seed.clear();
		int x=10-countDigits(step);
		int y=10-countDigits(mod);
		seedi0 = 0;
		seed.insert(0);
		for (int i = 1; i < 100000; i++)
		{

			seedi = (seedi0 + step) % mod;
			if (seed.count(seedi) == 0 && seedi < mod)
				seed.insert(seedi);
			seedi0 = seedi;
		}
		bool b = 1;


		if (seed.size() != mod)
			b = 0;

		while (x--)
			cout << " ";
		cout << step;
		while (y--)
			cout << " ";
		cout << mod  ;
		if (b)
			cout << "    Good Choice" << endl;
		else
			cout << "    Bad Choice" << endl;
		cout << endl;
	}
	return 0;
}
