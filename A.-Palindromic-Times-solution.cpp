#include <iostream>

using namespace std;

int main()
{
	char time[5];
	for (int i = 0; i < 5; i++)
		cin >> time[i];

	int hh = (time[0] - '0') * 10 + (time[1] - '0');
	int mm = (time[3] - '0') * 10 + (time[4] - '0');
	int hrev = (time[1] - '0') * 10 + (time[0] - '0');
	if (hh == 23 && mm < 32)
	{
		mm = 32;
	}
	else if (hh == 23 && mm > 32)
	{
		hh = 0;
		mm = 0;
	}
	else
	{
		if (mm < hrev)
		{
			mm = hrev;
		}
		else
		{
			hh++;
			mm = (hh % 10) * 10 + hh / 10;
		}
	}
	if (hh == 16 || hh == 17 || hh == 18 || hh == 19)
	{
		hh = 20;
		mm = 02;
	}
	else if (hh==6||hh == 7 || hh == 8 || hh == 9)
	{
		hh = 10;
		mm = 01;
	}
	time[0] = '0' + hh / 10;
	time[1] = '0' + hh % 10;
	time[3] ='0'+mm/10;
	time[4] = '0'+mm%10;
	for (int i = 0; i < 5; i++)
		cout << time[i];
	cout << endl;
	return 0;
}
