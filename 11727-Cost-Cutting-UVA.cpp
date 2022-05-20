#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t, cases[3],revt=1;
	cin >> t;
	while (t--)
	{
		cin >> cases[0] >> cases[1] >> cases[2];
		sort(cases, cases + 3);
			cout <<"Case "<<revt<<": "<< cases[1] << endl;
		revt++;
	}

	return 0;
}
