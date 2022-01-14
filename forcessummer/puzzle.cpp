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
		ll n,m;
		cin>>n>>m;
		if (m*n<=m+n)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}

	}

}