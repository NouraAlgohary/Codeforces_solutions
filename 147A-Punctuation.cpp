#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	bool b = 1, b2 = 1;
	while (cin >> s)
	{

		if (!b && s[0]>='a'&& s[0]<='z')
		{
			cout << " ";
		}
		for (int i = 0; i < s.size(); i++)
		{

			//punctuation marks
			if ((s[i]<'a' || s[i]>'z') &&i!=s.size()-1&&s[i + 1] != ' ')
			{
				cout << s[i] << " ";
			}
			else
			{
				cout << s[i];
			}
		}
		b = 0;
	}
	return 0;
}
