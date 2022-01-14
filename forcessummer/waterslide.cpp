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
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ll count = 0;
		ll i = n-1;
		while(i>0)
		{
			if (a[i-1]>a[i])
			{
				count+=a[i-1]-a[i];
			}
			i--;
		}
		cout<<count<<"\n";
	}

}