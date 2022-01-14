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
		for (ll i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		unordered_map<ll,ll> m,m3;
		ll max = -1;
		ll s = 0;
		for (ll i = 0; i < n-1; ++i)
		{
			for (ll j = i+1; j < n; ++j)
			{
				if (m3[a[i]]==0)
				{
					m3[a[i]]= 0;
					ll sum = a[i]+a[j];
					m[sum]++;
					if (max < m[sum])
					{
						max = m[sum];
						s = sum;
					}
				}
				
			}
			m3.clear();
		}
		//cout<<s<<"\n";
		ll i = 0;
		ll teams = 0;
		map<ll,ll> mp;
		while(i<n)
		{
			if (mp[i]==0)
			{

				ll temp = s - a[i];
				for (int j = i+1; j < n; ++j)
				{
					if (temp == a[j] && mp[j]==0)
					{
					//	cout<<i<<" "<<j<<"\n";
						teams++;
						mp[j]=1;
						mp[i]=1;
						break;
					}
				}
			}
			i++;
			
		}
		m.clear();
		cout<<teams<<"\n";
	}

}