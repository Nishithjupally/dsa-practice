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
		int a[n];
		for(int i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		int x = a[0];
		int flag = 1;
		for (int i = 1; i < n; ++i)
		{
			if (a[i]!=a[0])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			cout<<n<<"\n";
		}
		else
			cout<<1<<"\n";
	}

}