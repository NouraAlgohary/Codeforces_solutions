#include<iostream>
#include<string>
using namespace std;
bool isBea(string num)
{
	bool b = 1;
	if (num[0] == '1')
	{
		for (int i = 1; i < num.size(); i++)
		{
			if (num[i] != '0') return false;
		}

			return true;
	}
	else
		return false;

}

int main()
{
	int n;
	string x, notBea = "";
	long long Bea = 0;
	bool is0 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == "0")
		{
			is0 = 1;
		}
		else if (isBea(x))
		{
			Bea += x.size()-1;
		}
		else
			notBea = x;
	}
	if (is0)
		cout << "0" << endl;
	else
	{
		if (notBea != "")
			cout << notBea;
		else cout << "1";
		while (Bea--)
			cout << "0";
		cout << endl;
	}
	return 0;
}
