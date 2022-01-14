#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	t = 1;
	//cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll a[n],b[m];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
		}
		ll c[n];
		map<int,int> m;
		for (int i = 0; i < n; ++i)
		{
			ll min1 = INT_MAX;
			for (int j = 0; j < m; ++j)
			{
				ll temp = a[i]&b[j];
				m[temp]++;
				//min1 = min(min1,temp);
			}
			//c[i]=min1;
		}
		ll c2 = c[0]|c[1];
		for (int i = 2; i < n; ++i)
		{
			c2 = c2|c[i];
		}
		//ll min1 = INT_MAX;
		//for (int i = 0; i < m; ++i)
	//	{
	//		min1 = min(min1,c|b[i]);
	//	}
		cout<<c2<<"\n";

	}

}