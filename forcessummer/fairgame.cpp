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
		string a;
		cin>>a;
		ll count = 0;
		ll i=1;
		while(i<n-1)
		{
			if (a[i]=='R'&&a[i-1]=='R'&&a[i+1]=='R')
			{
				a[i]='L';
				count++;
			}
			if (a[i]=='L'&&a[i-1]=='L'&&a[i+1]=='L')
			{
				a[i]='R';
				count++;
			}
			i++;
		}
		if (a[0]=='R'&&a[n-1]=='R'&&a[1]=='R')
		{
			a[0]='L';
			count++;
		}
		if (a[0]=='L'&&a[n-1]=='L'&&a[n-2]=='L')
		{
			a[n-1]='R';
			count++;
		}
		cout<<count<<"\n";
	}

}