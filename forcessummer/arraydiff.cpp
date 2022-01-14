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
		set<int> s;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			s.insert(a[i]);
		}
		if (n==1 || s.size()==1)
		{
			cout<<"YES\n";
			continue;
		}
		int flag  =1;
		int prev = 0;
		int now = 0;
		auto j = s.begin();
		prev = *j;
		for (auto i = ++j; i != s.end(); ++i)
		{
			now = *i;
			//cout<<now<<" "<<prev<<"\n";
			if (now-prev > 1)
			{
				flag = 0;
				cout<<"NO\n";
				break;
				//continue;
			}
			prev = now;
		}
		if (flag==0)
		{
			continue;
		}
		cout<<"YES\n";

	}

}