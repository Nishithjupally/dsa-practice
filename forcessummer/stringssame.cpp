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
		string s[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>s[i];
		}
		map<char,int> m;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < s[i].length(); ++j)
			{
				m[s[i][j]]++;
			}
		}
		int ans = 1;
		for(auto i : m)
		{
			if (i.second % n !=0)
			{
				ans = 0;
				break;
			}
		}
		if (ans)
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}

}