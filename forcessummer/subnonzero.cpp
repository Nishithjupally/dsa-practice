#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int n;
	cin>>n;
	long long int a[n];
	long long int count = 0;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		long long int temp = a[i];
		for (int j = i+1; j < n; ++j)
		{
			temp = temp + a[j];
			if (temp == 0)
			{
				count = count + n-j-1;
			}
		}
	}
	long long int ans = n*(n+1)/2;
	ans = ans - count;
	cout<<ans<<"\n";
}