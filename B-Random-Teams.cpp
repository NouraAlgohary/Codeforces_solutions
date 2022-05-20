#include<iostream>
using namespace std;
int main()
{
	int m, n;
	long long min = 0, max = 0, imx = 0, imn = 0;
	cin >> m >> n;

		imx = m - n;
		max = imx * (imx + 1) / 2;


		long long extra = m % n;
		imn = m / n;
		min = (imn * (imn - 1) * (n - extra) / 2) + ((imn+1)*(imn) * extra / 2);

	cout << min << " " << max << endl;

	return 0;
}
