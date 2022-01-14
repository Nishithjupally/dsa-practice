#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		ll max1 = INT_MIN;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			max1=max(a[i],max1);
		}
		if (k%2==1)
		{
			for (int i = 0; i < n; ++i)
			{
				a[i]=max1-a[i];
			}
			for (int i = 0; i < n; ++i)
			{
				cout<<a[i]<<" ";
				//max1=max(a[i],max1);
			}
			cout<<"\n";
		}
		else
		{
			for (int i = 0; i < n; ++i)
			{
				a[i]=max1-a[i];
			}
			max1=INT_MIN;
			for (int i = 0; i < n; ++i)
			{
				//cin>>a[i];
				max1=max(a[i],max1);
			}
			for (int i = 0; i < n; ++i)
			{
				a[i]=max1-a[i];
			}
			for (int i = 0; i < n; ++i)
			{
				cout<<a[i]<<" ";
				//max1=max(a[i],max1);
			}
			cout<<"\n";
		}
	}

}