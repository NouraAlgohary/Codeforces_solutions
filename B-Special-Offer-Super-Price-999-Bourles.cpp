#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int numOF9(long long num)
{
	int c = 0;
	while (num %10==9)
	{
		c++;
		num /= 10;
	}
	return c;
}
int main()
{
	long long p, d,max,pi;
	cin >> p >> d;
	max = p;
	for (int i = 1; i <= 18; i++)
	{
		pi = p - p % (long long)(pow(10, i)) - 1;
		if ((p - pi) <= d && numOF9(pi) > numOF9(max))
			max = pi;
		else if ((p-pi) > d)
			break;
}
	cout << max << endl;

	return 0;
}
