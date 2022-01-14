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
		ll n,m,x,y;
		cin>>n>>m>>x>>y;
		ll count = 0;
		ll row = 0;
		ll x2 = x+1,y2 = y;
		while(x>=1)
		{
			for (int i = y; i > 0;--i)
			{
				cout<<x<<" "<<i<<"\n";
			}
			for (int i = y+1; i < m+1; ++i)
			{
				cout<<x<<" "<<i<<"\n";
			}
			x--;
		}
		while(x2<=n)
		{
			for (int i = y; i > 0;--i)
			{
				cout<<x2<<" "<<i<<"\n";
			}
			for (int i = y+1; i < m+1; ++i)
			{
				cout<<x2<<" "<<i<<"\n";
			}
			x2++;
		}
	}

}