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
		ll temp = n;
		ll p = 1;
		ll ans = 0;
		while(n>1)
		{
			if (n <= (3*(p*p)+p)/2)
			{
				ans++;
				if (n < (3*(p*p)+p)/2)
				{
					//cout<<p<<" "<<n<<"\n";
					p--;
					n -= (3*(p*p)+p)/2;
					p = 0;
				}
				else
				{
					//cout<<p<<" "<<n<<"\n";
					n -= (3*(p*p)+p)/2;
					p = 0;
				}
				//cout<<p<<" "<<n<<"\n";
			}
			p++;
		}
		cout<<ans<<"\n";
	}

}