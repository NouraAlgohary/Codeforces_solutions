#include <iostream>
#include<stdio.h>
#include<sstream>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	long long azeros = 0, bzeros = 0;

	//counting leading zeros
	while (true)
	{
		if (a[azeros] == '0')
			azeros++;
		else
			break;
	}
	while (true)
	{
		if (b[bzeros] == '0')
			bzeros++;
		else
			break;
	}

	//separating leading zeros
	string s1, s2;
	s1 = a.substr(azeros, a.size() - azeros);
	s2 = b.substr(bzeros, b.size() - bzeros);

	//comparing
	if (s1.size() > s2.size())
		cout << ">" << endl;
	else if (s2.size() > s1.size())
		cout << "<" << endl;
	else {
		if (s1 == s2)
			cout << "=" << endl;
		else
		{
			int i = 0;
			while (true)
			{
				if (s1>s2)
				{
					cout << ">" << endl;
					break;
				}
				else if (s1<s2)
				{
					cout << "<" << endl;
					break;
				}
				i++;
			}

		}
	}
	return 0;
}
