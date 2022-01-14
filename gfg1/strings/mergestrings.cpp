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
		string s1,s2;
		cin>>s1>>s2;
		ll l1 = s1.length();
		ll l2 = s2.length();
		char a[l1+l2];
		if (l1 == l2)
		{
			//char a[2*l1];
			ll p =0,q=0;
			for (ll i = 0; i < 2*l1; ++i)
			{
				if (i%2 == 0)
				{
					a[i] =  s1[p++];
				}
				else
				{
					a[i] = s2[q++];
				}
			}
		}
		else if(l1>l2)
		{
			//char a[l1+l2];
			ll p =0,q=0;
			for (ll i = 0; i < 2*l2; ++i)
			{
				if (i%2 == 0)
				{
					a[i] =  s1[p++];
				}
				else
				{
					a[i] = s2[q++];
				}
			}
			for (ll i = 2*l2; i < l1+l2; ++i)
			{
				a[i] = s1[p++];
			}
		}
		else if(l1<l2)
		{
			//char a[l1+l2];
			ll p =0,q=0;
			for (ll i = 0; i < 2*l1; ++i)
			{
				if (i%2 == 0)
				{
					a[i] =  s1[p++];
				}
				else
				{
					a[i] = s2[q++];
				}
			}
			for (ll i = 2*l1; i < l1+l2; ++i)
			{
				a[i] = s2[p++];
			}
		}
		for (ll i = 0; i < l1+l2; ++i)
		{
			cout<<a[i];
		}
		cout<<"\n";


	}

}