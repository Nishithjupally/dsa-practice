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
		ll x = n;
		if (x%4 == 0)
		{
			x = x/4;
		}
		else
		{
			x = x/4;
			x++;
		}
		ll ans = 0;
		for (ll i = 0; i < n-x; ++i)
		{
			cout<< 9;
		}
		for (int i = 0; i < x; ++i)
		{
			cout<< 8;
		}
		
		cout<<"\n";
	}

}