#include<iostream>
#include<string>

using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		int c = 0;
		bool b = 1;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(') c++;
			else if (s[i] == ')') c--;
			if (c < 0)
			{
				b = 0;
				break;
			}
		}
		if (b && c == 0) cout << "correct" << endl;
		else cout << "incorrect" << endl;
	}
	return 0;
}
