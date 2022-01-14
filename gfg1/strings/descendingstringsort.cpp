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
		ll a[26]={0};
		for (ll i = 0; i < s.length(); ++i)
		{
			a[s[i]-'a']++;
		}
		for (ll i = 25; i >= 0; --i)
		{
			for (ll j = 0; j < a[i]; ++j)
			{
				char temp = char('a'+ i);
				cout<<temp;
			}
		}
		cout<<"\n";

	}

}