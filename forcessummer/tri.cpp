#include <bits/stdc++.h>

using namespace std;

#define ll long long  

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll m,n,x;
		cin>>x>>n>>m;

		ll ans = x,flag = 0;
		if (ans-10*m <= 0)
		{
			cout<<"YES\n";
			continue;
		}
		for (int i = 0; i < n; ++i)
		{
			ans = (ans/2)+10;
			if (ans-10*m <= 0)
			{
				cout<<"YES\n";
				//continue;
				flag = 1;
			}
			if (flag)
			{
				break;
			}
		}
		if (flag)
		{
			continue;
		}
		if ((ans -(m*10))<=0)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}