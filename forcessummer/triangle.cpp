#include <bits/stdc++.h>

using namespace std;

#define ll long long  

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		int flag = 0;
		for (ll x = b; x >= a; --x)
		{
			for (ll y = b; y <= c; ++y)
			{
				for (ll z = c;  z<= b+c; ++z)
				{
					if (x+y >z && y+z > x && z+x>y)
					{
						cout<<x<<" "<<y<<" "<<z<<"\n";
						flag = 1;
					}
					if (flag)
					{
						break;
					}
				}
				if (flag)
				{
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
	}
}