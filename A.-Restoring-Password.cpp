#include <iostream>
#include<string>
#include<string.h>
#include<sstream>
using namespace std;

int main()
{
string s;
string num[10], pass[8];

//input
cin >> s;
for(int i=0;i<10;i++)
    cin>>num[i];


//substring into array of strings
for (int i = 0; i < 8; i++)
{
	int j = i * 10;
		pass[i] = s.substr(j, 10);
}

//checking
for(int i=0;i<8;i++)
{
    for(int j=0;j<10;j++)
	{
        if(pass[i]==num[j])
                 cout<<(j++);
    }
}
cout<<endl;
    return 0;
}
