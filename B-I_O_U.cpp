#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n, m,a,b,c,nums[10000],total=0;
	cin >> n >> m;
	memset(nums, 0, sizeof(nums));
		for (int i = 0; i < m; i++)
		{
			cin >> a >> b >> c;
			nums[a-1] += c;
			nums[b-1] -= c;
		}
	for (int i = 0; i < n; i++)
	{
		if (nums[i] > 0)
			total += nums[i];
	}
	cout << total << endl;

	return 0;
}
