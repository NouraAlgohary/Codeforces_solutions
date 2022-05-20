#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	string s="";
	cin >> t;
	getline(cin, s);
	for (int i = 1; i <= t; i++)
	{
		int first = 0, sec = 0;
		double weight = 0;
		getline(cin,s);
		first = (s[0] - '0');

		if (s.size() >4)
			sec = (s[4] - '0');

		weight = first * 0.5 + sec * 0.05;
		cout << "Case " << i << ": " << weight << endl;
		s = "";
	}
	return 0;
}
