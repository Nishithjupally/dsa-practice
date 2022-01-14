#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b)
{
	if (a==0)
	{
		return b;
	}
	return gcd(b%a,a);
}

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
		ll flag = 1;
		ll mine = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			b[i]=a[i];
			if (i>0 &&a[i-1]>a[i])
			{
				flag = 0;
			}
			mine=min(mine,a[i]);
		}
		if (flag)
		{
			cout<<"YES\n";
		}
		else
		{
			sort(b,b+n);
			ll flag2 = 1;
			for (int i = 0; i < n; ++i)
			{
				if (a[i]!=b[i])
				{
					ll temp = gcd(a[i],b[i]);
					if (temp%mine != 0)
					{
						cout<<"NO\n";
						flag2 = 0;
						break;
					}
				}
			}
			if (flag2)
			{
				cout<<"YES\n";
			}
		}
	}

}