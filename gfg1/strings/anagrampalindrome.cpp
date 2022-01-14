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
		string s;
		cin>>s;
		ll count[256] = {0};
		for (ll i = 0; i < s.length(); ++i)
		{
			count[s[i]]++;
		}
		ll flag = 1;
		if (s.length()%2 == 0)
		{
			for (ll i = 0; i < 256; ++i)
			{
				if (count[i]%2 == 1)
				{
					cout<<"No\n";
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				cout<<"Yes\n";
			}
		}
		else
		{
			//cout<<"hh";
			ll odd = 0;
			for (ll i = 0; i < 256; ++i)
			{
				if (count[i]%2 == 1)
				{
					odd++;
					//cout<<"helo\n";
				}
			}
			if (odd == 1)
			{
				cout<<"Yes\n";
			}
			else
			{
				cout<<"No\n";
			}

		}
	}

}