#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	long long num;
	cin >> n;
	while (n--)
	{
		cin >> num;
		if (num == 1)
		{
			cout << "NO" << endl;
			continue;
		}
		bool b = 0;
	    long long  root = sqrt(num);
		 if (pow(root,2) ==num)
		{
			b = 1;
			long long miniroot = sqrt(root);
			if (miniroot < 1000000)
			{
				for (long long i = 2; i <= miniroot; i++)
				{
					if (root % i == 0)
					{
						b = 0;
						break;
					}
				}
			}
			else
			{
				long long miniminiroot = sqrt(miniroot);
				for (long long i = 2; i <= miniminiroot; i++)
				{
					if (miniroot % i == 0)
					{
						b = 0;
						break;
					}
				}
			}
		}
		if (b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
