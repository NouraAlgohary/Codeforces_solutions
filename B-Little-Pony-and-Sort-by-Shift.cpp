#include<iostream>
using namespace std;
int main()
{
	int n, arr[100000],imn=0;
	bool b1 = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] < arr[i])
		{
			imn = i + 1;
			break;
		}
	}
	if (imn == 0)
		cout << "0" << endl;
	else
	{
		for (int i = imn; i < n - 1; i++)
		{
			if (arr[i + 1] < arr[i])
			{
				b1 = 0;
				break;
			}
		}
		if (b1 && arr[n - 1] <= arr[0])
			cout << n - imn << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}
