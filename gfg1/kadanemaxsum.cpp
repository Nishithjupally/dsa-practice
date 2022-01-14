#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int ans=0,temp=0;
	for (int i = 0; i < n; ++i)
	{
		temp = temp + a[i];
		if (temp < 0)
		{
			temp = 0;
		}
		if (temp > ans)
		{
			ans = temp;
		}
	}
	cout<<"Max sum "<<ans<<"\n";
	
}