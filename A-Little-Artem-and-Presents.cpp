#include<iostream>
using namespace std;
int main()
{
	int n,p;
	cin >> n;
	if (n == 1 || n == 2)
		p = 1;
	else if (n % 3 == 0)
		p = 2 * (n / 3);
	else
		p = 2 * (n / 3) + 1;

	cout << p << endl;

	return 0;
}
