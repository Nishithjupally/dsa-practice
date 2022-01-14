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
		ll n;
		cin>>n;
		ll a[n],b[n];
		ll min1 = INT_MAX,min2=INT_MAX;
		for (ll i = 0; i < n; ++i)
		{
			cin>>a[i];
			min1 = min(min1,a[i]);
		}
		for (ll i = 0; i < n; ++i)
		{
			cin>>b[i];
			min2 = min(min2,b[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			a[i]=a[i]-min1;
			b[i]=b[i]-min2;
		}
		ll count = 0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<" "<<b[i]<<"\n";
		// }
		for (ll i = 0; i < n; ++i)
		{
			count+=max(a[i],b[i]);
		}
		cout<<count<<"\n";
	}

}