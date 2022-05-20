#include<iostream>
#include<string>
#include<stdio.h>
#include<sstream>
using namespace std;
int c=0;
int reduce(long sum)
{
	long res=0;
	while (sum > 0)
	{
		res += sum % 10;
		sum /= 10;
	}
	if (res > 9)
	{
		c++;
		return reduce(res);
	}
	else
	{
		c++;
		return c;
	}
}
int main()
{
	string in;
	long sum = 0;
	cin >> in;
	for (int i = 0; i < in.size(); i++)
		sum += in[i] - '0';

	if (sum > 9)
	{
		c++;
		reduce(sum);
	}
	else if (sum < 9 && in.size()>1)
		c = 1;
	else
		c = 0;


	cout << c;

	return 0;
}
