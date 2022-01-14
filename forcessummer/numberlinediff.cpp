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
		ll n,k;
		cin>>n>>k;
		if (n==k)
		{
			cout<<0<<"\n";
			continue;
		}
		if (n%2==0 && k==0||n%2==0 && k==n)
		{
			cout<<0<<"\n";
			continue;
		}
		else if (n%2==1 && k==0||n%2==1 && k==n)
		{
			cout<<1<<"\n";
			continue;
		}
		if (n==0)
		{
			cout<<k<<"\n";
			continue;
		}
		if (n<k)
		{
			cout<<k-n<<"\n";
			continue;
		}
		else if (n>k)
		{
			if (n%2==0)
			{
				if (k%2==0)
				{
					cout<<0<<"\n";
					continue;
				}
				else
				{
					cout<<1<<"\n";
					continue;
				}
			}
			if (n%2==1)
			{
				if (k%2==1)
				{
					cout<<0<<"\n";
					continue;
				}
				else
				{
					cout<<1<<"\n";
					continue;
				}
			}
		}
	}

}