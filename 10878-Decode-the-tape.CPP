#include<iostream>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
    getline(cin, s);
	getline(cin, s);
	while (s != "___________")
	{
		char out=0;
                if (s[2] == 'o') out +=64;
                if (s[3] == 'o') out += 32;
                if (s[4] == 'o') out +=16;
                if (s[5] == 'o') out +=8;
                if (s[7] == 'o') out +=4;
                if (s[8] == 'o') out +=2;
                if (s[9] == 'o')  out += 1;
		 cout << (char)out << endl;
		 		getline(cin, s);
	}
	return 0;
}
